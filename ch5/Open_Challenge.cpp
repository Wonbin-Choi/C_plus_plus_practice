#include <iostream>
#include <string>
using namespace std;

class Morse{
private:
	string alphabet[26] = {".-", "-...", "-.-.", "-..", ".",
							 "..-.", "--.", "....", "..", ".---",
							 "-.-", ".-..", "--", "-.", "---",
							 ".--.", "--.-", ".-.", "...", "-",
							 "..-", "...-", ".--", "-..-", "-.--", "--.."};
	string digit[10] ={"-----", ".----", "..---", "...--", "....-",
							".....", "-....", "--...", "---..", "----."};
	string slash = "-..-.";
	string question = "..--..";
	string comma = "--..--";
	string period = ".-.-.-";
	string plus = ".-.-.";
	string equal = "-...-";
public:
	Morse(){}
	void text2Morse(string text, string& morse);
	bool morse2Text(string morse, string& text);
};

void Morse::text2Morse(string text, string& morse){
	morse = "";
	for(int i=0;i<text.length();i++){
		char temp = text[i];
		if(isalpha(temp)){
			if(temp >= 65 && temp <= 90) temp += 32;
			morse = morse + alphabet[temp-'a'] + " ";
		}
		else if(temp == ' ') morse += "  ";
		else if(isdigit(temp)) morse = morse + digit[temp - '0'] + ' ';
		else if(temp = '?') morse = morse + question + " ";
		else if(temp = ',') morse = morse + comma + " ";
		else if(temp = '.') morse = morse + period + " ";
		else if(temp = '+') morse = morse + plus + " ";
		else if(temp = '=') morse = morse + equal + " ";
	}
}

bool Morse::morse2Text(string morse, string &text){
	string bufMorse;
	text2Morse(text,bufMorse);
	if(bufMorse == morse) return true;
	else return false;
}

int main(){
	string text, morse;
	Morse m;

	cout << "write english text. changes morse" << endl;
	getline(cin,text);
	m.text2Morse(text,morse);
	cout << morse << endl << endl;

	cout << "translate morse\n";
	
	if(m.morse2Text(morse,text))
		cout << text << endl;
	else
		cout << "it's not correct\n"; 

	return 0;
}
