#include <iostream>
using namespace std;

class BaseOne
{
public:
	void SimpleFuncOne() { cout << "BaseOne" << endl; }
};

class BaseTwo
{
public:
	void SimpleFuncTwo() { cout << "BaseTwo" << endl; }
};

class MultiDerived : public BaseOne, protected BaseTwo
{
public:
	void CompleFunc()
	{
		SimpleFuncOne();
		SimpleFuncTwo();
	}
};

int main(void)
{
	MultiDerived mdr;
	mdr.CompleFunc();
	return 0;
}