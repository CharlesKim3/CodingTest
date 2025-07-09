#include <string>
#include <vector>

using namespace std;

string Insert(string w)
{
    if(w.empty()) return "";
    
    string answer = ""; 
    if('0' <= w[0] && w[0] <= '9')
    {
        answer += w[0];
        for(int i=1; i<w.size(); ++i) answer += tolower(w[i]);
    }
    else
    {
        answer += toupper(w[0]);
        for(int i=1; i<w.size(); ++i) answer += tolower(w[i]);
    }
    return answer;
}

string solution(string s) {
    string answer = "";
    string word = "";
    for(int i = 0; i<s.size(); ++i)
    {
        if(s[i] == ' ')
        {
            if(!word.empty())
            {
                answer += Insert(word);
                word = "";
            }
            
            int check = 1;
            while(s[i+check] == ' ') ++check;
            
            i += check - 1;
            while(check)
            {
                answer += ' ';
                --check;
            }
        }
        else
            word += s[i];
    }
    answer += Insert(word);
    
    return answer;
}