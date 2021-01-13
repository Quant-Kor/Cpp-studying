#include <iostream>
#include <cstring>
using namespace std;

// 깊은 복사가 이뤄지도록 대입 연산자와 복사 생성자를 동시에 정의하고 확인을 위한 main함수를 만들어라.

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
		if (pistol != NULL) // 원래 있었던 것 동적할당 해제를 해주어야 메모리 누수 X
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