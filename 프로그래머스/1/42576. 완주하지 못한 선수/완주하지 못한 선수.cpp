#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int> m;
    
    for(const auto& c : completion)
    {
        if(m.find(c) == m.end())
            m.insert({c,1});
        else
            m[c]++;
    }
    
    for(const auto& p : participant)
    {
        if(m.find(p) == m.end())
        {
            answer = p;
            break;
        }
        else
        {
            if(m[p] < 1)
            {
                answer = p;
                break;
            }
            m[p]--;
        }
    }
    
    return answer;
}