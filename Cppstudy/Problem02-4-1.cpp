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
	cout << strcmp(str3, str4) << endl;
	return 0;
}