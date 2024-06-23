#ifndef __EXP_H__
#define __EXP_H__
class Exp{
	int op1, op2;
public:
	Exp();
	Exp(int a,int b);
	Exp(int c);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};
#endif
