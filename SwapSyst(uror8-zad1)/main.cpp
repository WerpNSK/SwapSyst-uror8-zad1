#include<iostream>

using namespace std;

void sys(int digit, int syst)
{
	int i = 0, A[50];
	for (;digit > 0;i++)
	{
		A[i] = digit % syst;
		digit /= syst;
	}
	for (int j = i - 1;j >= 0;j--)
	{
		if (A[j] < 10)
			cout << A[j];
		else
			cout << char(A[j] - 10 + 'A');
	}
}




void main() {
	setlocale(LC_ALL, "Russian");
	int digit;
	do
	{
		cout << "Эта программа переводит число в любую систему счисления.\nПожалуйста введите число: ";
		cin >> digit;
		cout << "\nВведите систему счисления: ";
		int syst;
		cin >> syst;
		sys(digit, syst);
		cout << "\nЕсли хотите продолжить, нажмите 1: ";
		cin >> digit;
	} while (digit == 1);
}