#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    unordered_map<int,int> m;
    
    for(auto& a : arr)
    {
        if(m[a] == 0)
        {
            m[a]++;
            answer.push_back(a);
        }
    }
    
    answer.resize(k,-1);
    return answer;
}