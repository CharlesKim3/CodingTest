#include <iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;

	if (m - 45 >= 0)
		m -= 45;
	else
	{
		m = 60 + (m - 45);
		h = h > 0 ? h - 1 : 23;
	}
	cout << h << " " << m;

	return 0;
}