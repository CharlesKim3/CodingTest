#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(int i=0; i<s.size(); ++i)
    {
        int count = 0;
        int convert = s[i] - 'a';
        
        while(count < index)
        {
            ++convert;
            s[i] = (convert % 26) + 'a';
            
            if(skip.find(s[i]) == string::npos)
                ++count;
        }
        answer += s[i];
    }
    return answer;
}