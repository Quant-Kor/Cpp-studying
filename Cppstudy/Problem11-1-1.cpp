#include <iostream>
#include <cstring>
using namespace std;

// ���� ���簡 �̷������� ���� �����ڿ� ���� �����ڸ� ���ÿ� �����ϰ� Ȯ���� ���� main�Լ��� ������.

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum)
	{

	}
	void Shot()
	{
		cout << "BANG!" << endl;
		bullet--;
	}
};

class Police
{
private:
	int handcuffs;
	Gun* pistol;
public:
	Police(int bnum, int bcuff) : handcuffs(bcuff)
	{
		if (bnum > 0)
			pistol = new Gun(bnum);
		else
			pistol = NULL;
	}
	Police(const Police& pl) : handcuffs(pl.handcuffs)
	{
		if (pl.pistol != NULL)
			pistol = new Gun(*(pl.pistol));
		else
			pistol = NULL;
	}
	Police& operator=(const Police& pl)
	{
		if (pistol != NULL) // ���� �־��� �� �����Ҵ� ������ ���־�� �޸� ���� X
			delete pistol;
		if (pl.pistol != NULL)
			pistol = new Gun(*(pl.pistol));
		else
			pistol = NULL;

		handcuffs = pl.handcuffs;
		return *this;
	}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
	void Shot()
	{
		if (pistol == NULL)
			cout << "Hut BBANG!" << endl;
		else
			pistol->Shot();
	}
	~Police()
	{
		if (pistol != NULL)
			delete pistol;
	}
};

int main(void)
{
	Police pman1(5, 3);
	Police pman2 = pman1;
	pman2.Shot();
	pman2.PutHandcuff();

	Police pman3(2, 4);
	pman3 = pman1;
	pman3.Shot();
	pman3.PutHandcuff();
	return 0;
}