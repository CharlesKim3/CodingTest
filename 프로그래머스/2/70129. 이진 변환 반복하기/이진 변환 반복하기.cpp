#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2,0);
    
    while(s.size() > 1)
    {
        sort(s.begin(),s.end());
        string::iterator it = s.begin();
        while(*it == '0') ++it;
        answer[1] += it - s.begin();
        
        s.erase(remove(s.begin(),s.end(),'0'),s.end());
        int length = s.size();
        s = "";
        while(length >= 1)
        {
            s += (length % 2) + '0';
            length /= 2;
        }
        ++answer[0];
    }
    
    return answer;
}