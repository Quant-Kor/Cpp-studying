#include <iostream>

int main(void)
{
	int val;

	std::cout << "����� �Է��Ͻðڽ��ϱ�? ";
	std::cin >> val;

	for (int i = 1; i < 10; i++)
	{
		std::cout << val << "X" << i << "=" << val * i << std::endl;
	}
	return 0;
}