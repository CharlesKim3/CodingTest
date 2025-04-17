#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int count[10] = {};
    
    for(auto y : Y)
    {
        count[y - '0']++;
    }
    
    for(auto x : X)
    {
        int ch = x - '0';
        if(count[ch] > 0)
        {
            answer += x;
            count[ch]--;
        }
    }
    
     sort(answer.begin(), answer.end(), greater<char>());
    
    if(answer.empty()) answer = "-1";
    else if (answer[0] == '0') answer = "0";
    
    return answer;
}