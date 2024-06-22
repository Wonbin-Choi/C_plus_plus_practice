#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << "enter number>>";
	cin >> a >> b;
	if(a>b)
		cout << "big num = " << a << '\n';
	else
		cout << "big num = " << b << '\n';

	return 0;
}
