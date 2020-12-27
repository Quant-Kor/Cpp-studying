#include <iostream>
using namespace std;

class Calculator {

private:
	int plus;
	int minus;
	int mul;
	int div;
public:
	void Init();
	void ShowOpCount();
	double Add(double x, double y);
	double Min(double x, double y);
	double Mul(double x, double y);
	double Div(double x, double y);
};

void Calculator::Init()
{
	plus = 0;
	minus = 0;
	mul = 0;
	div = 0;
}

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << plus << " »¬¼À: " << minus << " °ö¼À: " << mul << " ³ª´°¼À: " << div << endl;
}

double Calculator::Add(double x, double y)
{
	plus++;
	return x + y;
}

double Calculator::Min(double x, double y)
{
	minus++;
	return x - y;
}

double Calculator::Mul(double x, double y)
{
	mul++;
	return x * y;
}

double Calculator::Div(double x, double y)
{
	div++;
	return x / y;
}

int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}