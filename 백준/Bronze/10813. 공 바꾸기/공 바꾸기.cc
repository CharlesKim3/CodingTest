#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N,M;
	cin >> N >> M;

	vector<int> v(N);
	for (int i = 0; i < N; ++i)
		v[i] = i + 1;

	for (int j = 0; j < M; ++j)
	{
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;

		swap(v[tmp1 - 1], v[tmp2 - 1]);
	}
	
	for (auto& v1 : v)
		cout << v1 << " ";

	return 0;
}