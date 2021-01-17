#include <iostream>
using namespace std;

template <typename T1>
void SwapData(T1& pos1, T1& pos2)
{
	T1 temp = pos1;
	pos1 = pos2;
	pos2 = temp;
}

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{

	}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};


int main(void)
{
	Point pos1(10, 20);
	Point pos2(30, 40);
	pos1.ShowPosition();
	pos2.ShowPosition();

	SwapData(pos1, pos2);
	pos1.ShowPosition();
	pos2.ShowPosition();
	return 0;
}
