#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int idx = 0;
    for(int i=0; i<s.size(); i = idx)
    {
        int same = 1;
        int diff = 0;
        idx = i + 1;
        while(same != diff && s.size() > idx)
        {
            s[i] != s[idx] ? ++diff : ++same;
            ++idx;
        }
        ++answer;
    }
    return answer;
}