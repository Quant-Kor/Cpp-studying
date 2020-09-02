#ifndef __RECTANGLE_CONSTRUCTOR_H__
#define __RECTANGLE_CONSTRUCTOR_H__

#include "Point_Constructor.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;
public:
	Rectangle(const int& x1, const int& t1, const int& x2, const int& y2);
	void ShowRecInfo() const;
};
#endif