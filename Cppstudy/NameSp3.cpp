#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace BestComImpl            // 하나로 묶어도 가능하고 둘로 나눠서 표현해도 상관없음!
{
	void PrettyFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();
	ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}