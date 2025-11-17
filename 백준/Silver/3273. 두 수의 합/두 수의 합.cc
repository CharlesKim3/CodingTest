#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int n, limit;
	cin >> n;

	vector<int> num(n,0);
	for (int i = 0; i < num.size(); ++i)
		cin >> num[i];
	sort(num.begin(), num.end());
	cin >> limit;
	
	int front = 0;
	int back = num.size() - 1;
	int cnt = 0;
	while (front < back)
	{
		if (num[front] + num[back] == limit)
		{
			++front;
			--back;
			++cnt;
		}
		else if (num[front] + num[back] > limit)
			--back;
		else if(num[front] + num[back] < limit)
			++front;
	}

	cout << cnt;
	
	return 0;
}