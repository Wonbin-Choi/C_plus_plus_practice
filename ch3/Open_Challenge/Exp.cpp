#include "include/Exp.h"
#include <math.h>

Exp::Exp():Exp(1,1){}
Exp::Exp(int c):Exp(c,1){}
Exp::Exp(int a, int b){
	op1 = a;
	op2 = b;
}
int Exp::getValue(){
	return pow(op1,op2);
}
int Exp::getBase(){
	return op1;
}
int Exp::getExp(){
	return op2;
}
bool Exp::equals(Exp b){
	if(b.getValue() == getValue())
		return true;
	else
		return false;
}
