#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int* music = new int[a];
	int* question = new int[b];
	int* answer = new int[b];

	int sum = 0;
	for (int i = 0; i < a; ++i)
	{
		int tmp = 0;
		cin >> tmp;
		sum += tmp;
		music[i] = sum;
	}
	for (int i = 0; i < b; ++i)
		cin >> question[i];

	for (int j = 0; j < b; ++j)
	{
		int idx = 0;
		while (music[idx] <= question[j])
			++idx;
		
		answer[j] = idx + 1;
	}

	for (int j = 0; j < b; ++j)
		cout << answer[j] << endl;
	return 0;
}