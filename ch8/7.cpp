#include <iostream>
#include <string>
using namespace std;
class BaseMemory{
	char *mem;
protected:
	BaseMemory(int size){mem = new char [size];}
	void setData(char x[], int len){for(int i=0;i<len;i++) mem[i] = x[i];}
	void setData(char x, int n){mem[n] = x;}
	char getData(int n){return mem[n];}
};

class ROM : public BaseMemory{
public:
	ROM(int size, char ch[], int len) : BaseMemory(size) {setData(ch,len);}
	char read(int n){return getData(n);}
};

class RAM : public BaseMemory{
public:
	RAM(int size) : BaseMemory(size){}
	void write(int n, char x){setData(x,n);}
	char read(int n){return getData(n);}
};

int main(){
	char x[5]={'h','e','l','l','o'};
	ROM biosROM(1024*10,x,5);
	RAM mainMemory(1024*1024);

	for(int i=0;i<5;i++) mainMemory.write(i,biosROM.read(i));
	for(int i=0;i<5;i++) cout << mainMemory.read(i);
	cout << endl;
	return 0;
}
