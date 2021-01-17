#include <iostream>
using namespace std;

template <typename T>
T SumArray(T arr[], int len)
{
	T sum = 0;
	for (int i = 0; i < len; i++)
		sum += arr[i];
	return sum;
}

int main(void)
{
	double arr1[10];
	for (int i = 0; i < 10; i++)
		arr1[i] = 1.2;

	int arr2[10];
	for (int i = 0; i < 10; i++)
		arr2[i] = 2;

	double sumd = SumArray(arr1, 10);
	int sumi = SumArray(arr2, 10);

	cout << sumd << endl;
	cout << sumi << endl;
	return 0;
}