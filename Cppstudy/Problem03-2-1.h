#ifndef __PROBLEM03_2_1__H__
#define __PROBLEM03_2_1__H__

class Calculator
{
private:
	int addnum;
	int minnum;
	int divnum;
	int mulnum;
public:
	void Init();
	double Add(double x, double y);
	double Min(double x, double y);
	double Div(double x, double y);
	double Mul(double x, double y);
	void ShowOpCount();
};

#endif