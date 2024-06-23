#include <iostream>
using namespace std;
#include "include/Exp.h"
int main(){
	Exp i(3,2);
	Exp j(9);
	Exp k;

	cout << i.getValue() << ' ' << j.getValue() << ' ' << k.getValue() << endl;
	cout << "a의 베이스 " << i.getBase() << ',' << "지수 " << i.getExp() << endl;
	if(i.equals(j))
		cout << "same\n";
	else
		cout << "not same\n";

	return 0;
}
