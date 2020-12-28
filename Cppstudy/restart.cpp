#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum
	{
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};
	void ShowPositioninfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
		}
	}
}

class NameCard
{
private:
	char* name;
	char* compname;
	char* callnum;
	int memnum;

public:
	NameCard(const char* aname, const char* acompname, const char* acallnum, int amemnum)
	{
		name = new char[strlen(aname) + 1];
		compname = new char[strlen(acompname) + 1];
		callnum = new char[strlen(acallnum) + 1];
		strcpy(name, aname);
		strcpy(compname, acompname);
		strcpy(callnum, acallnum);
		memnum = amemnum;
	}
	void ShowNameCardInfo();
	~NameCard()
	{
		delete[]name;
		delete[]compname;
		delete[]callnum;
	}
};

void NameCard::ShowNameCardInfo()
{
	cout << "이름: " << name << endl;
	cout << "회사: " << compname << endl;
	cout << "전화번호: " << callnum << endl;
	cout << "직급: "; COMP_POS::ShowPositioninfo(memnum);
	cout << endl;
}

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}