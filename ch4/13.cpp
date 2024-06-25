#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string str;
	int cnt = 0;
	int alphabet[26] = {0};
public:
	Histogram(string str){this->str = str;}
	void put(string str){this->str.append(str);}
	void putc(char c){this->str.append(&c);}
	void print();
	void changeAlp();
};

void Histogram::print(){
	char ch = 'a';
	cout << str << endl << endl;
	changeAlp();
	cout << "Alphabet count = " << cnt << endl << endl;
	while(ch <='z'){
		cout << ch << " (" << alphabet[ch - 'a'] << ")\t: ";
		for(int i=0;i<alphabet[ch - 'a'];i++)
			cout << '*';
		cout << endl;
		ch++;
	}
}

void Histogram::changeAlp(){
	for(int i=0;i<str.length();i++){
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		if(str[i] >= 'a' && str[i] <= 'z'){
			cnt++;
			alphabet[str[i]-'a']++;
		}
	}
}

int main(){
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

	return 0;
}
