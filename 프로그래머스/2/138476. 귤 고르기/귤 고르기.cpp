#include <string>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    map<int, int> m;
    for(auto t : tangerine)
        m[t]++;
    
    priority_queue<pair<int,int>> q;
    for(auto [key, value] : m)
    {
        q.push({value, key});
    }
    
    while(q.size())
    {
        auto [key, value] = q.top();
        q.pop();
        k -= key;
        ++answer;
        if(k <= 0) break;
    }
    
    return answer;
}