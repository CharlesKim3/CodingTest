#include <iostream>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	cin >> num1>>num2;
	
	int one, ten, hondred,sum;

	one = (num2 % 100) % 10;
	ten = (num2 % 100) / 10;
	hondred = num2 / 100;

	cout << num1 * one << endl;
	cout << num1 * ten << endl;
	cout << num1 * hondred << endl;
	cout<< (num1 * one) + (num1 * ten * 10) + (num1 * hondred * 100);

	return 0;
}