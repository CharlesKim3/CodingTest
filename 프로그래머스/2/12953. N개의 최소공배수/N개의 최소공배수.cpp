#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    while(b)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a,b);
}

int solution(vector<int> arr) {
    int answer = 0;
    
    sort(arr.begin(), arr.end());
    
    while(arr.size() > 1)
    {
        int idx = arr.size() - 1;
        int A = arr[idx];
        int B = arr[idx - 1];
        
        arr.erase(arr.begin() + idx - 1, arr.end());
        arr.push_back(lcm(A,B));
    }
    
    answer = arr[0];
    
    return answer;
}
