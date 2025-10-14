#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string result = "";
    string tmp = "";
    
    for(int i = 0; i<numbers.size(); ++i)
    {
        tmp += numbers[i];
        if(tmp == "one")
        {
            result += "1";
            tmp = "";
        }
        else if(tmp == "two")
        {
            result += "2";
            tmp = "";
        }
        else if(tmp == "three")
        {
            result += "3";
            tmp = "";
        }
        else if(tmp == "four")
        {
            result += "4";
            tmp = "";
        }
        else if(tmp == "five")
        {
            result += "5";
            tmp = "";
        }
        else if(tmp == "six")
        {
            result += "6";
            tmp = "";
        }
        else if(tmp == "seven")
        {
            result += "7";
            tmp = "";
        }
        else if(tmp == "eight")
        {
            result += "8";
            tmp = "";
        }
        else if(tmp == "nine")
        {
            result += "9";
            tmp = "";
        }
        else if(tmp == "zero")
        {
            result += "0";
            tmp = "";
        }
    }
    
    answer = stoll(result);
    
    return answer;
}