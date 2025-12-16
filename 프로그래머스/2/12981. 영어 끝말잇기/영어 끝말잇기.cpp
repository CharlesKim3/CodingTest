#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2,0);
    
    map<string,int> repeat;
    vector<int> cnt(n+1,0); cnt[1]++; repeat[words[0]]++;
    char check = words[0][words[0].size() - 1];
    
    for(int i=1; i<words.size(); ++i)
    {
        repeat[words[i]]++;
        
        if(check == words[i][0] && repeat[words[i]] == 1)
        {
            check = words[i][words[i].size() - 1];
            cnt[(i % n) + 1]++;
        }
        else
        {
            answer[0] = (i % n) + 1;
            answer[1] = cnt[(i % n) + 1] + 1;
            break;
        }
    }

    return answer;
}