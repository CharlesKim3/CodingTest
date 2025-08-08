#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string a, string b) {
    string answer = "";
    int Aidx = a.size() - 1;
    int Bidx = b.size() - 1;
    int upper = 0;
    
    while(Aidx >= 0 || Bidx >= 0)
    {
        int aa = Aidx >= 0 ? a[Aidx] - '0' : 0;
        int bb = Bidx >= 0 ? b[Bidx] - '0' : 0;
        int sum = aa + bb;
        if(sum + upper <= 9)
        {
            answer += to_string(sum + upper);
            upper = 0;
        }
        else
        {
            answer += to_string(sum + upper - 10);
            upper = 1;
        }
        --Aidx;
        --Bidx;
    }
    
    if(upper)
        answer += "1";
    
    reverse(answer.begin(),answer.end());
    
    return answer;
}