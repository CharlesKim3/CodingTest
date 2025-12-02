#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int K;
	cin >> K;

	stack<int> s;
	for (int i = 0; i < K; ++i)
	{
		int tmp;
		cin >> tmp;
		tmp != 0 ? s.push(tmp) : s.pop();
	}

	int sum = 0;
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;
	return 0;
}
