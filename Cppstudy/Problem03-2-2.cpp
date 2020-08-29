#include <iostream>
#include <cstring>
#include "Problem03-2-2.h"
using namespace std;

void Printer::SetString(const char* str)
{
	strcpy(str_val, str);
}
void Printer::ShowString()
{
	cout << str_val << endl;
}