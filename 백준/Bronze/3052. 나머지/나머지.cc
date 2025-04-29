#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(42);
	for (int i = 0; i < 10; ++i)
	{
		int tmp;
		cin >> tmp;
		v[tmp % 42]++;
	}

	int answer = 0;
	for (const auto& V : v)
	{
		if (V > 0)
			++answer;
	}
	
	cout << answer;

	return 0;
}