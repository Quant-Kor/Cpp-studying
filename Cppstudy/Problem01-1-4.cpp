#include <iostream>

int main(void)
{
	int sales = 0;
	int money;

	while (1)
	{
		std::cout << "�Ǹ� ������ ���� ������ �Է�(-1 to end): ";
		std::cin >> sales;

		if (sales == -1)
			break;

		money = 50 + (sales * 0.12);
		std::cout << "�̹� �� �޿�: " << money << "����" << std::endl;
	}
	std::cout << "���α׷��� �����մϴ�." << std::endl;
	return 0;
}