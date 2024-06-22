#include <iostream>
#include <string.h>
using namespace std;

int main(){
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	int sum = 0;
	while(1){
		cout << "주문>>";
		char menu[100];
		int cnt;
		cin >> menu >> cnt;
		if(!strcmp(menu,"에스프레소")) sum += (2000 * cnt);
		else if(!strcmp(menu,"아메리카노")) sum += (2300 * cnt);
		else if(!strcmp(menu,"카푸치노")) sum += (2500 * cnt);
		if(sum >= 20000){
			cout << sum << "원 판매\n";
			break;
		}
	}

	return 0;
}
