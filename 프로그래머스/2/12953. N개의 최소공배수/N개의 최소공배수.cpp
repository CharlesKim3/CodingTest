#include <string>
#include <vector>
#include <numeric>
using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    
    answer = arr.front();
    for(int i=1; i<arr.size(); ++i)
    {
        answer = lcm(answer, arr[i]);
    }
    
    return answer;
}