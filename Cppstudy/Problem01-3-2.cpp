#include <iostream>

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

// �������� �����ε� ������ �����Ͽ� ���������� SimpleFunc()�� ���� �ƹ��� ���ھ��� ȣ�� �Ǿ��� ��, �� �Լ� ��� ȣ�� ������ �����ϱ� ������ ������ ���� �߻�
// ��ȣ�� �����ε� ����!!