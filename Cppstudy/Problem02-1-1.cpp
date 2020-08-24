#include <iostream>
using namespace std;

void incr(int* num)
{
	*num += 1;
}

void chan(int* num)
{
	*num = -(*num);
}

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	incr(&val1);
	chan(&val2);

	cout << val1 << endl;
	cout << val2 << endl;
	return 0;
}