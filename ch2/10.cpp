#include <iostream>
#include <string.h>

using namespace std;
int main(){
	char name[100];
	cin.getline(name,100);
	for(int i=0;i<strlen(name);i++){
		for(int j=0;j<i+1;j++)
			cout << name[j];
		cout << '\n';
	}
	return 0;
}
