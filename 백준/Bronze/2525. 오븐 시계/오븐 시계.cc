#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (B + C >= 60)
	{
		A += (B + C) / 60;
		B = (B + C) % 60;

		if (A >= 24)
		{
			A %= 24;
		}
	}
	else
		B += C;

	cout << A << ' ' << B;

	return 0;
}