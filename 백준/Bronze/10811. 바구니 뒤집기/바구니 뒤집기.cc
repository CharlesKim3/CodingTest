#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	vector<int> basket;
	for (int i = 0; i < n; ++i)
		basket.push_back(i + 1);
	
	for (int k = 0; k < m; ++k)
	{
		int i, j;
		cin >> i >> j;
		reverse(basket.begin() + i - 1, basket.begin() + j);
	}

	for (auto& b : basket)
		cout << b << " ";
	return 0;
}