#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	int* Cards = new int(N);
	for (int i = 0; i < N; ++i)
		cin >> Cards[i];

	int sum = 0;
	for (int i = 0; i < N - 2; ++i)
	{
		for (int j = i + 1; j < N - 1; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				if (Cards[i] + Cards[j] + Cards[k] > sum &&
					Cards[i] + Cards[j] + Cards[k] <= M)
					sum = Cards[i] + Cards[j] + Cards[k];
			}
		}
	}
	cout << sum;

	return 0;
}