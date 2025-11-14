#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	unordered_map<string, int> m;
	for (int i = 0; i < N + M; ++i)
	{
		string str;
		cin >> str;
		if (m.find(str) == m.end())
			m.insert({ str,1 });
		else
			m[str]++;
	}

	int result = 0;
	vector<string> v;
	for (pair<string, int> m : m)
	{
		if (m.second > 1)
		{
			++result;
			v.push_back(m.first);
		}
	}
	sort(v.begin(), v.end());

	cout << result << endl;
	for (const auto& v : v)
		cout << v << endl;

	return 0;
}