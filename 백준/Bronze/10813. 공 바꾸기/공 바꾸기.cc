#include <iostream>
using namespace std;

int main()
{
	int N,M;
	cin >> N >> M;

	int* basket = new int[N];
	for (int i = 0; i < N; ++i)
		basket[i] = i + 1;

	for (int j = 0; j < M; ++j)
	{
		int a, b;
		cin >> a >> b;

		swap(basket[a - 1], basket[b - 1]);
	}

	for (int i = 0; i < N; ++i)
		cout << basket[i] << " ";

	delete[] basket;

	return 0;
}