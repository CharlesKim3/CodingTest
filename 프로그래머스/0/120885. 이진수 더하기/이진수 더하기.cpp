#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    
    int num = stoi(bin1, nullptr, 2) + stoi(bin2, nullptr, 2);
    
    if(num > 0)
    {
            while(num)
        {
            answer += to_string(num % 2);
            num /= 2;
        }
        reverse(answer.begin(),answer.end());
    }
    else
        answer = "0";
    
    return answer;
}