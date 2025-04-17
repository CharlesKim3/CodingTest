#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    vector<int> count(10,0);
    
    for(auto& y : Y)
        count[y - '0']++;
    
    for(auto& x : X)
    {
        int ch = count[x - '0'];
        if(ch > 0)
        {
            answer += x;
            count[x - '0']--;
        }
    }
    
    sort(answer.begin(),answer.end(),greater<char>());
    if(answer.empty()) answer = "-1";
    else if(answer[0] == '0') answer = "0";
    
    return answer;
}