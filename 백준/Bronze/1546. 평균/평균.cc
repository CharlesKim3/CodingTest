#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	cin >> num;

	vector<int> score(num);
	for (int i = 0; i < num; ++i)
	{
		int tmp;
		cin >> tmp;
		score[i] = tmp;
	}

	double max = *max_element(score.begin(), score.end());
	double sum = 0;
	for (int i = 0; i < num; ++i)
	{
		sum += (score[i] / max) * 100;
	}

	cout << sum / num;

	return 0;
}