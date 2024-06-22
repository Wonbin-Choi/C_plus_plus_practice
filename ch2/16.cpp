#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(){
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";

	char str[10000];
	cin.getline(str,10000,';');

	int histo[26] = {0};
	for(int i=0;i<strlen(str);i++){
		str[i] = tolower(str[i]);
		if(str[i] >= 'a' && str[i]<='z'){
			histo[str[i]-'a']++;
		}
	}
	for(int i=0;i<26;i++){
		cout << (char)('a'+i) << '(' << histo[i] <<')' << "\t:\t";
		for(int j=0;j<histo[i];j++){
			cout << '*';
		}
		cout << '\n';
	}
	return 0;
}
