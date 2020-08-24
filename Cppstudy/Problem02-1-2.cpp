#include <iostream>
using namespace std;

int main(void)
{

}

// SwapByRef(23, 45); 와 같은 형태로 호출하면 컴파일 에러가 발생하는 이유는
// 참조자의 경우 선언과 동시에 변수로 초기화를 해야하는데 23, 45는 변수가 아닌 상수이기때문에
// 컴파일 에러가 발생하는 것 같다.