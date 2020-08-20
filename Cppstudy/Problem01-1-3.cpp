#include <iostream>

int main(void)
{
	int val;

	std::cout << "몇단을 입력하시겠습니까? ";
	std::cin >> val;

	for (int i = 1; i < 10; i++)
	{
		std::cout << val << "X" << i << "=" << val * i << std::endl;
	}
	return 0;
}