#include <iostream>

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

// 컴파일은 오버로딩 조건을 만족하여 가능하지만 SimpleFunc()와 같이 아무런 인자없이 호출 되었을 때, 두 함수 모두 호출 조건을 만족하기 때문에 컴파일 에러 발생
// 모호한 오버로드 오류!!