#include <iostream>
using namespace std;
int main(){
	float num[5];
	cout << "enter 5 float num>>";
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
	float max = 0;
	for(int i=0;i<5;i++){
		if(max < num[i])
			max = num[i];
	}
	cout << "big num = " << max << '\n';

	return 0;
}
