#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int* score = new int[num];
	double max = 0;
	for (int i = 0; i < num; ++i)
	{
		int tmp;
		cin >> tmp;
		*(score + i) = tmp;
		if (score[i] > max)
			max = score[i];
	}
	
	double sum = 0;
	for (int i = 0; i < num; ++i)
	{
		sum += (score[i] / max) * 100;
	}

	cout << sum / num;

	return 0;
}