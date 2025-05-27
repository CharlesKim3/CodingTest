#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    for(int i= my_string.size() - 1; i >= 0; --i)
    {
        string tmp = "";
        for(int j=i; j<my_string.size(); ++j)
        {
            tmp += my_string[j];
        }
        answer.push_back(tmp);
    }
    
    sort(answer.begin(),answer.end());
    
    return answer;
}