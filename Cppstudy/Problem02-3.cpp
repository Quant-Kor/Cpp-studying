#include <iostream>
using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* psum = new Point;
	psum->xpos = p1.xpos + p2.xpos;
	psum->ypos = p1.ypos + p2.ypos;
	return *psum;
}

int main(void)
{
	Point* p1 = new Point;
	Point* p2 = new Point;

	p1->xpos = 1;
	p1->ypos = 1;

	p2->xpos = 2;
	p2->ypos = 2;

	Point &sum = PntAdder(*p1, *p2);
	cout << "[" << sum.xpos << ", " << sum.ypos << "]" << endl;

	delete p1;
	delete p2;
	delete& sum;
	return 0;
}