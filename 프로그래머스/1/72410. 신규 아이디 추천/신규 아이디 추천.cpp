#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    for(int i=0; i<new_id.size(); ++i)
    {
        if('A' <= new_id[i] && new_id[i] <= 'Z')
            new_id[i] = new_id[i] + 32;
    }
    
    for(int i=0; i<new_id.size(); ++i)
    {
        if(('a' <= new_id[i] && new_id[i] <= 'z') || 
           (48 <= new_id[i] && new_id[i] <= 57) || 
           new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
            answer += new_id[i];
    }
    
    string tmp = "";
    for(int i=0; i<answer.size(); ++i)
    {
        if(answer[i] == '.' && tmp.back() == '.')
            continue;
            
        tmp += answer[i];
    }
    answer = tmp;
    
    if(answer.front() == '.')
        answer = answer.substr(1);
    if(answer.back() == '.')
        answer.pop_back();
    
    if(answer.empty())
        answer = "a";
    
    if(answer.size() >= 16)
        answer = answer[14] == '.' ? answer.substr(0,14) : answer.substr(0,15);
    
    while(answer.size() < 3)
        answer += answer.back();
    
    return answer;
}