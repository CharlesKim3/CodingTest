#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    // 1
    for(int i=0; i<new_id.size(); ++i)
    {
        if ('A' <= new_id[i] && new_id[i] <= 'Z')
            new_id[i] = new_id[i] + 32;
    }
    
    // 2
    for (int i = 0; i < new_id.size(); ++i) 
    {
        if (('a' <= new_id[i] && new_id[i] <= 'z') ||
            ('0' <= new_id[i] && new_id[i] <= '9') ||
            new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
            answer += new_id[i];
    }
    
    // 3
    string temp = "";
    for (int i = 0; i < answer.size(); ++i) {
        if (answer[i] == '.' && !temp.empty() && temp.back() == '.')
            continue;
        temp += answer[i];
    }
    answer = temp;
    
    // 4
    if (!answer.empty() && answer.front() == '.')
        answer.erase(answer.begin());
    if (!answer.empty() && answer.back() == '.')
        answer.pop_back();
    
    //5
    if (answer.empty())
        answer = "a";
    
    //6
    if(answer.size() >= 16)
        answer = answer[14] == '.' ? answer.substr(0,14) : answer.substr(0,15); 
    
    // 7 
    while(answer.size() < 3)
        answer += answer.back();
    
    return answer;
}