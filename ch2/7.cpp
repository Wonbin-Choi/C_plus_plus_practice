#include <iostream>
#include <string.h>

using namespace std;
int main(){
	char str[100];
	while(1){
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(str,100);
		if(!strcmp(str,"yes")) break;
	}
	cout << "종료합니다...\n";
	return 0;
}
