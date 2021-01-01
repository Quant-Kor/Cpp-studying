#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS {
	enum {
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};
	void ShowpositionInfo(int pos){
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
};

class NameCard {
private:
	char* name;
	char* company;
	char* number;
	int position;
public:
	NameCard(const char* aname, const char* acompany, const char* anumber, int apos)
	{
		int len_name = strlen(aname) + 1;
		int len_comp = strlen(acompany) + 1;
		int len_number = strlen(anumber) + 1;
		name = new char[len_name];
		strcpy(name, aname);
		company = new char[len_comp];
		strcpy(company, acompany);
		number = new char[len_number];
		strcpy(number, anumber);
		position = apos;
	}
	void ShowNameCardInfo()
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << number << endl;
		cout << "직급: "; COMP_POS::ShowpositionInfo(position); cout << endl;
	}
};

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