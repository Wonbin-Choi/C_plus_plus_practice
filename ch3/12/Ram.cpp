#include "Ram.h"
#include <iostream>
using namespace std;
Ram::Ram(){}
Ram::~Ram(){cout << "메모리 제거됨\n";}

char Ram::read(int address){
	return mem[address];
}

void Ram::write(int address, char value){
	mem[address] = value;
}
