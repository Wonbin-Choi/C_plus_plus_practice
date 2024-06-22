#include <iostream>
using namespace std;
int sum(int a, int b);

int main(){
	int n;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	cout << "총 합은 " << sum(1,n) << '\n';
	return 0;
}
int sum(int a, int b){
	int k, res=0;
	for(k=a;k<=b;k++)
		res += k;
	return res;
}
