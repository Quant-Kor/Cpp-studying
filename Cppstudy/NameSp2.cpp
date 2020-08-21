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
	std::cout << "BestCom이 정의한 함수" << std::endl;
}


void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}