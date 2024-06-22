#include <iostream>
using namespace std;

int main(){
	int k,n=0;
	int sum=0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	for(k=1;k<=n;k++)
		sum+=k;
	cout << "총 합은 " << sum << '\n';
	return 0;
}
