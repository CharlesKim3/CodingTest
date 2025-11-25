#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    
    while(1)
    {
        vector<int> comp = arr;
        for(auto& a : arr)
        {
            if(a >= 50 && a % 2 == 0)
                a /= 2;
            else if(a < 50 && (a & 1) == 1)
                a = a * 2 + 1;
        }
        
        if(arr == comp) return answer;
        ++answer;
    }
    
    return answer;
}