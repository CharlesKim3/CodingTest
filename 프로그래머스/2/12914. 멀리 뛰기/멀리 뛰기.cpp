#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    int prev1 = 1, prev2 = 2;
    
    for(int i=3; i<=n; ++i)
    {
        answer = (prev2 + prev1) % 1234567;
        prev1 = prev2;
        prev2 = answer;
    }
    
    if(n < 3) answer = n;
    
    return answer;
}