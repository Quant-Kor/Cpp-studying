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
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
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
	cout << "�̸�: " << name << endl;
	cout << "ȸ��: " << compname << endl;
	cout << "��ȭ��ȣ: " << callnum << endl;
	cout << "����: "; COMP_POS::ShowPositioninfo(memnum);
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