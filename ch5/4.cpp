#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big);

int main(){
	int num1, num2;
	int big_num;

	cin >> num1 >> num2;
	if(bigger(num1, num2, big_num))
		cout << "same\n";
	else
		cout << big_num << " is bigger\n";
	return 0;
}

bool bigger(int a, int b, int& big){
	if(a==b) return true;
	else{
		if(a>b) big = a;
		else big = b;
		return false;
	}
}
