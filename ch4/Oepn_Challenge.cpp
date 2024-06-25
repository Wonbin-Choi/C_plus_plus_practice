#include <iostream>
#include <string>
using namespace std;

class Player{
	string name;
	string word;
public:
	Player(){}		
	void setName(string name){this->name = name;}		
	void setWord(string word){this->word = word;}		
	string getName(){return name;}		
	string getWord(){return word;}		
};

class WordGame{
	int size;
	Player *p;
public:
	WordGame();
	void playGame();
};

WordGame::WordGame(){
	cout << "Let's play the WordGame\n";
	cout << "How many player?";
	int n;
	cin >> n;
	size = n;
	p = new Player[n];
	for(int i=0;i<n;i++){
		cout << "Write player name. no blank>>";
		string name;
		cin >> name;
		p[i].setName(name);
	}
}

void WordGame::playGame(){
	string start_word = "father";
	cout <<	"start word is " << start_word << endl;
	int i = 0;
	while(true){
		cout << p[i%size].getName() << ">>";
		string word;
		cin >> word;
		p[i%size].setWord(word);
		if(start_word.at(start_word.length()-2) != p[i%size].getWord().at(0) || start_word.at(start_word.length()-1) != p[i%size].getWord().at(1)){
			cout << p[i%size].getName() << "failed!!\n";
			cout << "GAME OVER\n";
			break;
		}
		cout << endl;
		i++;
	}
}

int main(){
	WordGame game;
	game.playGame();

	return 0;
}
