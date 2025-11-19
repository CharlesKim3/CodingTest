#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, x;
	cin >> n;

	vector<int> v(n,0);
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	cin >> x;
	sort(v.begin(), v.end());
	
	int front = 0;
	int back = n - 1;
	int result = 0;
	while(front < back)
	{
		if (v[front] + v[back] == x)
		{
			++front; --back;
			++result;
		}
		else if (v[front] + v[back] > x)
			--back;
		else
			++front;
	}

	cout << result;

	return 0;
}