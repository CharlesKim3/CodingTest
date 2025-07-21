#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<string> word(N, "");
	
	for (int i = 0; i < word.size(); ++i)
		cin >> word[i];
	
	int count = 0;
	for (int i = 0; i < word.size(); ++i)
	{
		unordered_map<char, int> m;
		char comp = word[i][0];
		for (int j = 1; j < word[i].size(); ++j)
		{
			if (comp == word[i][j]) continue;
			else
			{
				m[comp]++;
				comp = word[i][j];
			}
		}
		m[comp]++;
		bool check = true;
		for (auto m1 : m)
		{
			if (m1.second > 1)
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