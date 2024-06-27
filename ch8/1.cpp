#include <iostream>
#include <string>
using namespace std;
class Circle{
private:
	int radius;
public:
	Circle(int radius=0){this->radius = radius;}
	int getRadius(){return radius;}
	void setRadius(int radius){this->radius = radius;}
	double getArea(){return 3.14*radius*radius;}
};

class NamedCircle:public Circle{
private:
	string name;
public:
	NamedCircle(int r=0,string name=""){
		setRadius(r);
		this->name = name;
	}
	string getName(){return name;}
	void show(){
		cout << "radius = " << getRadius() << ", " << getName() << endl; 
	}
};
int main(){
#if 0
	NamedCircle waffle(3,"waffle");
	waffle.show();
#endif
	NamedCircle pizza[5];
	double area[5];

	for(int i=0;i<5;i++){
		int r;
		string name;
		cout << i << ">>";
		cin >> r >> name;
		pizza[i] = NamedCircle(r,name);
		area[i] = pizza[i].getArea();
	}
	int cnt = 0;
	for(int i=0;i<4;i++){
		if(area[i] < area[i+1]) cnt = i+1;
	}
	cout << "biggest pizza is " << pizza[cnt].getName() << endl;
	return 0;
}
