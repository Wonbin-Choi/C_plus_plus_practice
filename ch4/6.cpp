#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cout << "write one sentence (exit)\n";
	do{
		cout << ">>";
		getline(cin,str);
		for(int i=str.length()-1;i>=0;i--)
			cout << str[i];
		cout << endl;
	}while(str.compare("exit"));
	
}
