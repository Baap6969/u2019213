// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int add(int x);
int main()
{
	int x;
	cout << "Enter a positive integer: ";
	cin >> x;
	cout << "Sum =  " << add(x);
	return 0;
}
int add(int x)
{
	if (x != 0)
		return x + add(x- 1);
	return 0;
}