#include <iostream>

int main(void)
{
	char name[10];
	char phonenum[20];

	std::cout << "����� �̸���? ";
	std::cin >> name;

	std::cout << "����� ��ȭ��ȣ��? ";
	std::cin >> phonenum;

	std::cout << "�̸�: " << name << std::endl;
	std::cout << "��ȯ��ȣ: " << phonenum << std::endl;
	return 0;
}