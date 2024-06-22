#include <iostream>
#include <string.h>

using namespace std;
int main(){
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n";
	cout << ">>";
	int max = 0;
	char max_name[100];
	for(int cnt=0;cnt<5;cnt++){
		char name[100];
		cin.getline(name,100,';');
		cout << cnt << " : " << name << '\n';
		if(max < strlen(name)){
			max = strlen(name);
			strcpy(max_name,name);
		}
	}
	cout << "가장 긴 이름은 " << max_name << '\n';
	return 0;
}
