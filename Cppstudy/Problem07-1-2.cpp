#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* fname, int fage) : age(fage)
	{
		name = new char[strlen(fname) + 1];
		strcpy(name, fname);
	}
	void ShowMyFriendInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~MyFriendInfo()
	{
		delete[] name;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* fname, int fage, const char* faddr, const char* fphone) : MyFriendInfo(fname, fage)
	{
		addr = new char[strlen(faddr) + 1];
		phone = new char[strlen(fphone) + 1];
		strcpy(addr, faddr);
		strcpy(phone, fphone);
	}
	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl << endl;
	}
	~MyFriendDetailInfo()
	{
		delete[] addr;
		delete[] phone;
	}
};

int main(void)
{
	MyFriendInfo j1("JeongMin", 25);
	MyFriendDetailInfo j2("JeongMin2", 27, "SeJong", "010-1234-5678");

	j1.ShowMyFriendInfo();
	j2.ShowMyFriendDetailInfo();
	return 0;
}