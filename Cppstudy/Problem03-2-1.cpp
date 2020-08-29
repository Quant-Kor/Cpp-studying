#include <iostream>
#include "Problem03-2-1.h"
using namespace std;


void Calculator::Init()
{
	addnum = 0;
	minnum = 0;
	divnum = 0;
	mulnum = 0;
}
double Calculator::Add(double x, double y)
{
	addnum += 1;
	return x + y;
}
double Calculator::Min(double x, double y)
{
	minnum += 1;
	return x - y;
}
double Calculator::Div(double x, double y)
{
	divnum += 1;
	return x / y;
}
double Calculator::Mul(double x, double y)
{
	mulnum += 1;
	return x * y;
}
void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << addnum << " »¬¼À: " << minnum << " °ö¼À: " << mulnum << " ³ª´°¼À: " << divnum << endl;
}