#include <iostream>

namespace BestCompl
{
	void SimpleFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestCompl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestCompl::SimpleFunc(void)
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
}


void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}