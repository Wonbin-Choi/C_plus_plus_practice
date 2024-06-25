#include <iostream>
using namespace std;
class Circle{
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius){
	this->radius = radius;
}
double Circle::getArea(){
	return radius*radius*3.14;
}
int main(){
	int n, cnt;
	cout << "How many Circle ? >> ";
	cin >> n;
	Circle *cArray = new Circle[n];
	for(int i=0;i<n;i++){
		int r;
		cout << "circle " << i+1 << "radius >> ";
		cin >> r;
		(cArray+i)->setRadius(r);
		if((cArray+i)->getArea() > 100) cnt++;
	}
	delete [] cArray;
	cout << cnt <<endl;
	return 0;
}
