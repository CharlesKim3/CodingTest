#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    bool minus = false;
    
    for(auto n : num_list)
    {
        if(n > -1)
            ++answer;
        else
        {
            minus = true;
            break;
        }
    }
    
    return minus ? answer : -1;
}