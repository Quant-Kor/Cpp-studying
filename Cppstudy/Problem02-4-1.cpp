#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char str1[] = "hi my name ";
	char str2[] = "is jeongmin";

	char str3[30];
	char str4[] = "hi my name is jeongmin";
	
	int i;

	i = strlen(str1);
	strcpy(str3, str1);
	strcat(str3, str2);

	cout << i << endl;
	cout << str3 << endl;
	if ((strcmp(str3, str4)) == 0)
		cout << "문자열 같다" << endl;
	else
		cout << "문자열 다르다" << endl;
	return 0;
}