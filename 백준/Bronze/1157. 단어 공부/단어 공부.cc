#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
	string word;
	cin >> word;

	unordered_map<char, int> count;
	for (int i = 0; i < word.size(); ++i)
	{
		word[i] = toupper(word[i]);
		if (count.find(word[i]) == count.end())
			count.insert(make_pair(word[i], 1));
		else
			count[word[i]]++;
	}

	vector<pair<char, int>> answer(count.begin(),count.end());
	sort(answer.begin(), answer.end(), [](auto prev, auto next) {
			return prev.second > next.second;
		});
	
	int maxNum = answer[0].second;
	for (int i = 1; i < answer.size(); ++i)
	{
		if (maxNum == answer[i].second)
		{
			cout << "?";
			return 0;
		}
	}

	cout << answer[0].first;

	return 0;
}