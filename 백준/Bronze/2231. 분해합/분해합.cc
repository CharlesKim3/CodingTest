#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int num = 1;
	bool ch = false;
	while (N > num)
	{
		int M = num;
		int result = M;
		while (M)
		{
			result += M % 10;
			M /= 10;
		}

		if (result == N)
		{
			cout << num;
			ch = true;
			break;
		}
		++num;
	}

	if (!ch) cout << 0;

	return 0;
}