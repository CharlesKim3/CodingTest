#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
	int N;
	cin >> N;
	string* word = new string[N];

	for (int i = 0; i < N; ++i)
	{
		string tmp = "";
		cin >> tmp;
		word[i] = tmp;
	}

	int count = 0;
	for (int i = 0; i < N; ++i)
	{
		unordered_map<char, int> m;
		char start = word[i][0];
		for (int j = 1; j < word[i].size(); ++j)
		{
			if (start == word[i][j]) continue;
			else
			{
				m[start]++;
				start = word[i][j];
			}
		}
		m[start]++;
		bool check = true;
		for (auto M : m)
		{
			if (M.second > 1)
			{
				check = false;
				break;
			}
		}
		
		if (m.empty() || check) ++count;
	}

	cout << count;

	return 0;
}