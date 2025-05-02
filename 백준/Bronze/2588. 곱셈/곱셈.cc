#include <iostream>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	cin >> num1>>num2;

	int a, b, c, d;
	a = num1 * (num2 % 10);
	b = num1 * ((num2 % 100) / 10);
	c = num1 * (num2 / 100);
	d = num1 * num2;
	
	cout << a << endl << b << endl << c << endl << d;

	return 0;
}