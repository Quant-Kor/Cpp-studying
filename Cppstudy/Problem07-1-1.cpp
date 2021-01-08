#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int gasoline) : gasolineGauge(gasoline)
	{

	}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int egauge, int gasoline) : electricGauge(egauge), Car(gasoline)
	{

	}
	int GetElecGague()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int wgague, int egauge, int gasoline) : waterGauge(wgague), HybridCar(egauge, gasoline)
	{

	}
	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·®: " << GetElecGague() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·®: " << waterGauge << endl;
	}
};

int main(void)
{
	HybridWaterCar wcar(10, 10, 10);

	wcar.ShowCurrentGauge();
	return 0;
}