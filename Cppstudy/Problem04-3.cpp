#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	/*
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	*/
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	int radius;
	Point pos;
public:
	Circle(int x, int y, int rad) :pos(x, y)
	{
		//empty space
	}

	/*
	void Init(int x, int y, int rad)
	{
		pos.Init(x, y);
		radius = rad;
	}
	*/
	void ShowCircleInfo() const
	{
		cout << "radius:" << radius << endl;
		pos.ShowPointInfo();
	}


};

class Ring
{
private:
	Circle cl1;
	Circle cl2;
public:
	void Init(int x1, int y1, int rad1, int x2, int y2, int rad2)
	{
		cl1.Init(x1, y1, rad1);
		cl2.Init(x2, y2, rad2);
	}
	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		cl1.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		cl2.ShowCircleInfo();
	}
};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}