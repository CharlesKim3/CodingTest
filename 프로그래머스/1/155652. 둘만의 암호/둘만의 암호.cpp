#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(auto s1 : s)
    {
        int count = 0;
        int convert = s1 - 'a';
        
        while(count < index)
        {
            ++convert;
            s1 = (convert % 26) + 'a';
            
            if(skip.find(s1) == string::npos)
                ++count;
        }
        
        answer += s1;
    }
    return answer;
}