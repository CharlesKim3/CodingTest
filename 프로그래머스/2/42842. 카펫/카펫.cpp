#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer(2,0);
    int size = brown + yellow;
    int x = 3; int y = 3;
    
    while(size != x * y)
    {
        y = 3;
        if(size == x * y)
            break;
        
        while(x > y)
        {
            ++y;
            if(size == x * y && yellow == (x - 2) * (y - 2))
            {
                answer[0] = x; answer[1] = y;
                return answer;
            }
        }
        ++x;
    }
    
    answer[0] = x; answer[1] = y;
    
    return answer;
}