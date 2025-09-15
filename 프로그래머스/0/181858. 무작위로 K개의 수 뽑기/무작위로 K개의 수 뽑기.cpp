#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    for(int i=0; i<arr.size(); ++i)
    {
        auto it = find(answer.begin(),answer.end(), arr[i]);
        if(it == answer.end())
            answer.push_back(arr[i]);
    }
    
    if(answer.size() >= k)
        answer.erase(answer.begin() + k, answer.end());
    else
    {
        int repeat = k - answer.size();
        for(int i=0; i<repeat; ++i)
            answer.push_back(-1);
    }
        
    
    return answer;
}