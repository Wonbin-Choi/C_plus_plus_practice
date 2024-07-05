#include <iostream>
#include <string>
using namespace std;

class BaseArray{
private:
	int capacity;
	int *mem;
protected:
	BaseArray(int capacity=100){
		this->capacity = capacity; mem = new int [capacity];
	}
	~BaseArray(){delete [] mem;}
	void put(int index, int val){mem[index] = val;}
	int get(int index){return mem[index];}
	int getCapacity(){return capacity;}
};

class MyQueue : public BaseArray{
	int len = 0;
public:
	MyQueue(int capacity=100):BaseArray(capacity){}
	void enqueue(int n){put(len,n); len++;}
	int capacity(){return getCapacity();}
	int length(){return len;}
	int dequeue(){
		int temp = get(0);
		for(int i=1;i<len;i++){
			if(get(i)){
				put(i-1,get(i));
			}
		}
		len--;
		return temp;
	}
};

int main(){
	MyQueue mQ(100);
	int n;
	cout << "first in first out : 5 >> ";
	for(int i=0;i<5;i++){
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "queue capacity : " << mQ.capacity() << ", length : " << mQ.length() << endl;
	cout << "dequeue >> ";
	while(mQ.length()!=0){
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "queue length : " << mQ.length() << endl;
	return 0;
}
