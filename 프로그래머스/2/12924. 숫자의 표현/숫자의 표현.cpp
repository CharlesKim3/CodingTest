#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int idx = 1;
    while(idx <= n)
    {
        int sum = 0;
        int count = idx;
        while(sum < n)
        {
            sum += count;
            if(sum == n) ++answer;
            ++count;
        }
        ++idx;
    }
    
    
    return answer;
}