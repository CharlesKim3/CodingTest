#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    
    int num1 = 0;
    for(auto b : bin1)
        num1 = num1 * 2 + (b - '0');
    int num2 = 0;
    for(auto b : bin2)
        num2 = num2 * 2 + (b - '0');
    int sum = num1 + num2;
    
    if(sum > 0)
    {
        while(sum)
        {
            answer += to_string(sum % 2);
            sum /= 2;
        }
        reverse(answer.begin(),answer.end());
    }
    else
        answer = "0";
    
    return answer;
}