#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    int repeat = n;
    string tmp = "";
    for(int i=0; i<my_str.size(); ++i)
    {
        if(repeat)
            tmp += my_str[i];
        else
        {
            answer.push_back(tmp);
            tmp = my_str[i];
            repeat = n;
        }
        --repeat;
    }
    
    if(!tmp.empty())
        answer.push_back(tmp);
    
    return answer;
}