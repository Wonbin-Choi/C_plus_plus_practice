#include <iostream>
#include <string.h>
using namespace std;

int main(){
	while(1){
		cout << "? ";
		char math[100];
		cin.getline(math,100);
		char *ptr = strtok(math," ");
		int num1 = atoi(ptr);
		ptr = strtok(NULL," ");
		char op = *ptr;
		ptr = strtok(NULL," ");
		int num2 = atoi(ptr);
		switch(op){
		case '+': cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n'; break;
		case '-': cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n'; break;
		case '*': cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n'; break;
		case '/': cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n'; break;
		case '%': cout << num1 << " % " << num2 << " = " << num1 % num2 << '\n'; break;
		}
	}
	return 0;
}
