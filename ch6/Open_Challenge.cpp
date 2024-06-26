#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
class Person{
	string name;
public:
	Person(string str="player"){name = str;}
	string getName(){return name;}
};

class UpAndDownGame{
private:
	static int start;
	static int num;
	static int end;
	Person *p;
public:
	UpAndDownGame(){p = new Person[2]; srand((unsigned)time(0));}
	~UpAndDownGame(){delete [] p;}
	void playGame();
};

int UpAndDownGame::start = 0;
int UpAndDownGame::end = 99;
int UpAndDownGame::num = rand() % 100;

void UpAndDownGame::playGame(){
	int i=0;
	cout << "Let's start Up & Down Game\n";
	string name;
	cout << "first player name >>";
	cin >> name;
	p[0] = Person(name);

	cout << "second player name >>";
	cin >> name;
	p[1] = Person(name);
	while(1){
		cout << "answer is in " << start << " ~ " << end << endl;
		cout << p[i%2].getName() << ">>";
		cin >> num;
		if(num < start) start = num;
		else if(num > end) end = num;
		else{
			cout << p[i%2].getName() << "win!!\n";
			break;
		}
		i++;
	}
}
int main(){
	UpAndDownGame udg;
	udg.playGame();
	return 0;
}
