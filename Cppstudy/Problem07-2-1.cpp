#include <iostream>
using namespace std;

class Rectangle
{
private:
	int xlen;
	int ylen;
public:
	Rectangle(int x, int y) : xlen(x), ylen(y)
	{

	}
	void ShowAreaInfo()
	{
		cout << "¸éÀû: " << xlen * ylen << endl;
	}
};

class Square : public Rectangle
{
private:
	int len;
public:
	Square(int l) : len(l), Rectangle(l, l)
	{

	}
};

int main(void)
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}