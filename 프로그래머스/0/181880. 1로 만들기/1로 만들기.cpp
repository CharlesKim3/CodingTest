#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(auto n : num_list)
    {
        while(n > 1)
        {
            if((n & 1) != 1)
            {
                n /= 2;
                ++answer;
            }
            else
            {
                n -= 1;
                n /= 2;
                ++answer;
            }
        }
    }
    
    return answer;
}