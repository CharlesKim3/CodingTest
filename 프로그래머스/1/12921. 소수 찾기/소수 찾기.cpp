#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> v(n+1, true);
    
    for(int i=2; i<=n; ++i)
    {
        if(v[i] == true)
        {
            for(int j = i * 2; j<=n; j += i)
                v[j] = false;
            
            ++answer;
        }
    }
    
    return answer;
}