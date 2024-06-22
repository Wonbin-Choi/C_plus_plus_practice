#include <iostream>
using namespace std;
int main(){
	cout << "enter line(100개 미만)." << '\n';
	char str[100];
	int cnt = 0;

	cin.getline(str,100);

	for(int i=0;i<100;i++){
		if(str[i] == 'x')	cnt++;
	}
	cout << "x의 개수는 " << cnt << '\n';

	return 0;
}
