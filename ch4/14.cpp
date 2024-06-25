#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Player{
	int card[3];
	string name;
public:
	Player():Player("player") {}
	Player(string name){this->name = name;}
	string getName(){return name;}
	bool check(){
		for(int i=0;i<3;i++){
			card[i] = rand() % 3;
			cout << card[i] << '\t';
		}
		for(int i=0; i<2;i++){
			if(card[i] != card[i+1])
				return false;
		}
		return true;
	}
};

class GamblingGame{
	Player player[2];
public:
	GamblingGame();
};

GamblingGame::GamblingGame(){
	string name;
	int i =0;
	cout << "***** Let's play the game!! ***** \n";
	cout << "first player>>";
	getline(cin,name);
	player[0] = Player(name);
	cout << "second player>>";
	getline(cin,name);
	player[1] = Player(name);
	while(true){
		cout << player[i%2].getName() << ":<Enter>";
		getchar();
		cout << '\t';
		if(player[i%2].check()){
			cout << player[i%2].getName() << "'s victory!!\n";
			break;
		}
		else{
			cout << "try again\n";
		}
		i++;
	}
}


using namespace std;

int main(){
	GamblingGame game;
	return 0;
}
