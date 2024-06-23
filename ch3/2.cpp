#include <iostream>
using namespace std;

class Date{
	int year;
	int month;
	int day;
	const char *str;
 public:
	Date(int a, int b, int c){
		year = a;
		month = b;
		day = c;
	}
	Date(const char* s){
		str = s;
	}
	int getYear() {return year;}
	int getMonth() {return month;}
	int getDay() {return day;}
	void show(){
		int flag = 0;
		while(*str != '\0'){
			if(*str == '/'){
				if(flag == 0) cout << "년";
				else if(flag == 1) cout << "월";
				else if(flag == 2) cout << "일";
				flag++;
			}
			else{
				cout << *str;
			}
			str++;
		}
		cout << endl;
	}
};

int main(){
	Date birth(2014,3,20);
	Date iDay("1945/8/15");
	iDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}
