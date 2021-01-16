#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
	int len;
	char* str;
public:
	String()
	{
		len = 0;
		str = NULL;
	}
	String(const char* s) // ��������� �⺻ ���ڿ�
	{
		len = strlen(s) + 1;
		str = new char[len];
		strcpy(str, s);
	}
	String(const String& s) // ���������
	{
		len = s.len;
		str = new char[len];
		strcpy(str, s.str);
	}
	~String()
	{
		if (str != NULL)
			delete []str;
	}
	String& operator= (const String& s) // ���� ������
	{
		if (str != NULL)
			delete[] str;

		len = s.len;
		str = new char[len];
		strcpy(str, s.str);
		return *this;
	}
	String& operator+= (const String& s)
	{
		len += (s.len - 1);
		char* tempstr = new char[len];
		strcpy(tempstr, str);
		strcat(tempstr, s.str);

		if (str != NULL)
			delete[] str;
		str = tempstr;
		return *this;
	}
	bool operator== (const String& s)
	{

		if (!strcmp(str, s.str))
			return true;
		else
			return false;
		
	}
	String operator+ (const String& s)
	{
		char* tempstr = new char[len + s.len -1];
		strcpy(tempstr, str);
		strcat(tempstr, s.str);

		String temp(tempstr);
		delete[] tempstr;
		return temp;
	}

	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>> (istream& is, String& s);

};

ostream& operator<<(ostream& os, const String& s)
{
	os << s.str;
	return os;
}

istream& operator>>(istream& is, String& s)
{
	char str[100];
	is >> str;
	s = String(str);
	return is;
}


int main(void)
{
	String str1 = "I like ";
	String str2 = "string class";
	String str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if (str1 == str3)
		cout << "���� ���ڿ�!" << endl;
	else
		cout << "�������� ���� ���ڿ�!" << endl;

	String str4;
	cout << "���ڿ� �Է�: ";
	cin >> str4;
	cout << "�Է��� ���ڿ�: " << str4 << endl;
	return 0;
}