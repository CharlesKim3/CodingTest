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
		count[word[i]]++;
	}

	int max = 0;
	char answer;
	for (auto i = count.begin(); i != count.end(); ++i)
	{
		if (max < i->second)
		{
			max = i->second;
			answer = i->first;
		}
		else if (max == i->second)
			answer = '?';
	}
	cout << answer;
	
	return 0;
}