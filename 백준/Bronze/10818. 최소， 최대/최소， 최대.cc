#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int* num = new int[N];
	for (int i = 0; i < N; ++i) cin >> num[i];

	int max = num[0];
	int min = num[0];
	for (int i = 1; i < N; ++i)
	{
		if (num[i] > max)
			max = num[i];
		if (num[i] < min)
			min = num[i];
	}
	cout << min << " " << max;

	return 0;
}