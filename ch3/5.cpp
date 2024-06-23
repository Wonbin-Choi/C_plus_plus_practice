#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
class Random{
public:
	int next(){
		int n = rand();
		return n;
	}
	int nextInRange(int start, int end){
		int n = rand() % (end - start + 1) + start;
		return n;
	}
};

int main(){
	Random r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for(int i=0;i<10;i++){
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 4까지의 랜덤한 정수 10개 --" << endl;
	for(int i=0;i<10;i++) {
		int n = r.nextInRange(2,4);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}
