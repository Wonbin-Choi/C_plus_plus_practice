#include <iostream>
using namespace std;
#include <string>
class Person {
	string name;
public:
	Person(){}
	Person(string name){this->name = name;}
	void setName(string name){this->name = name;}
	string getName(){return name;}
};

class Family{
	Person *p;
	int size;
public:
	Family(string name,int size);
	void setName(int n, string name);
	void show();
	~Family();
};

Family::Family(string name, int size){
	this->size = size;
	p = new Person[size];
	cout << name << "'s family member : " << size << endl;
}

Family::~Family(){
	delete [] p;
}

void Family::setName(int n, string name){
	(p+n)->setName(name);
}

void Family::show(){
	for(int i=0;i<size;i++){
		cout << (p+i)->getName() << '\t';
	}
	cout << endl;
}

int main(){
	Family *simpson = new Family("Simpson", 3);
	simpson->setName(0,"Mr. Simpson");
	simpson->setName(1,"Mrs. Simpson");
	simpson->setName(2,"Bart Simpson");
	simpson->show();
	delete simpson;

	return 0;
}
