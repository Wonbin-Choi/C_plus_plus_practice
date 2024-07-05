#include <iostream>
#include <string>
using namespace std;
class Printer{
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Printer(string mo="", string me="", int n=0){
		model = mo;
		manufacturer = me;
		availableCount = n;
		printedCount = 0;
	}
	bool print(int pages){
		if(availableCount >= pages){
			printedCount += pages;
			availableCount -= pages;
			return true;
		}
		else{ 
			cout << "can't print\n";
			return false;
		}
	}
	void show(){cout << model << ", " << manufacturer << ", available pages " << availableCount << " pages";}
};

class InkPrinter : public Printer{
	int availableInk;
public:
	InkPrinter(string mo="",string me="", int n=0, int i=0) : Printer(mo,me,n) { availableInk = i;}
	void printInk(int pages){
		if(availableInk >= pages){
			if(print(pages)){
				availableInk -= pages;
				cout << "printed\n";
			}
		}
		else cout << "can't print\n";
	}
	void showInk(){
		show();
		cout << ", Ink " << availableInk << endl;
	}
};

class LaserPrinter : public Printer{
	int availableToner;
public:
	LaserPrinter(string mo="",string me="", int n=0, int t=0) : Printer(mo,me,n) { availableToner = t;}
	void printToner(int pages){
		if(availableToner >= pages){
			if(print(pages)){
				availableToner -= pages;
				cout << "printed\n";
			}
		}
		else cout << "can't print\n";
	}
	void showToner(){
		show();
		cout << ", Toner " << availableToner << endl;
	}
};

int main(){
	InkPrinter ink("Officejet V40","HP",5,10);
	LaserPrinter laser("SCX-6x45","Samsung",3,20);
	cout << "Inkjet : ";
	ink.showInk();
	cout << "Laser : ";
	laser.showToner();

	int p,n;
	char ch;

	while(1){
		cout << endl << "printer(1.Inkjet, 2.Laser) and pages>>";
		cin >> p >> n;
		switch(p){
			case 1: {ink.printInk(n); break;}
			case 2: {laser.printToner(n); break;}
			default: break;
		}
		ink.showInk();
		laser.showToner();

		cout << "keep going?(y/n)>>";
		cin >> ch;
		if(ch == 'n') break;
	}
	return 0;
}
