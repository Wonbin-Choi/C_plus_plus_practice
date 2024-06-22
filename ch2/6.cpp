#include <iostream>
#include <string.h>
#include <string>

using namespace std;
int main(){	
	char str1[60];
	char str2[60];
	while(1){
		cout << "새 암호를 입력하세요>>";
		cin >> str1;

		cout << "새 암호를 다시 입력하세요>>";
		cin >> str2;

		if(!strcmp(str1,str2)){
			cout << "같습니다" <<'\n';
			break;
		}
		else
			cout << "같지 않습니다" <<'\n';
	}
	return 0;
}
