#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> v1(100,vector<int>(100));
	vector<vector<int>> v2(100, vector<int>(100));
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> v1[i][j];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> v2[i][j];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cout << v1[i][j] + v2[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}