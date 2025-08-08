#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int cnt = 0;
	int num = 665;
	while (1)
	{
		++num;
		int tmp = num;
		while (tmp >= 666)
		{
			if (tmp % 1000 == 666)
			{
				++cnt;
				break;
			}
			tmp /= 10;
		}
		
		if (cnt == N)
		{
			cout << num << endl;
			break;
		}
	}

	return 0;
}