// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int calculatePower(int, int);
int main()
{
	int base, power, ans;
	cout << "Enter base number : ";
	cin >> base;
	cout << "Enter power number : ";
	cin >> power;
	ans = calculatePower(base, power);
	cout << base << "^" << power << " = " << ans;
	return 0;
}
int calculatePower(int base, int power)
{
	if (power != 0)
		return (base * calculatePower(base, power - 1));
	else
		return 1;
}