#include <iostream>
using namespace std;

int main()
{
	int num, cnt, res = 0;

	for (int i = 0; i < 9; ++i)
	{
		cin >> num;
		if (num > res)
		{
			res = num;
			cnt = i + 1;
		}
	}

	cout << res << endl << cnt;

	return 0;
}