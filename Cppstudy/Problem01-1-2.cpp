#include <iostream>

int main(void)
{
	char name[10];
	char phonenum[20];

	std::cout << "당신의 이름은? ";
	std::cin >> name;

	std::cout << "당신의 전화번호는? ";
	std::cin >> phonenum;

	std::cout << "이름: " << name << std::endl;
	std::cout << "전환번호: " << phonenum << std::endl;
	return 0;
}