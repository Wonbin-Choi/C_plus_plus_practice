#include <iostream>
using namespace std;
class Account{
	const char *name;
	int id, money;
 public:
	Account(const char *n, int num, int m){
		name = n;
		id = num;
		money = m;
	}
	void deposit(int n){
		money += n;
	}
	const char* getOwner(){
		return name;
	}
	int inquiry(){
		return money;
	}
	int withdraw(int n){
		if(money >= n){
			money -= n;
			return n;
		}
		else{
			int m = money;
			money = 0;
			return m;
		}
	}
};

int main(){
	Account a("kitae",1,5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	
	return 0;
}
