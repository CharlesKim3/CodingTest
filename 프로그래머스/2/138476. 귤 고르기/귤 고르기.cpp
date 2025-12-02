#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    map<int,int> m;
    for(auto t : tangerine)
    {
        if(m.find(t) == m.end())
            m.insert({t,1});
        else
            m[t]++;
    }
    
    vector<pair<int,int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](auto l, auto r){
       return l.second > r.second; 
    });
    
    for(auto [key, value] : v)
    {
        k -= value;
        ++answer;
        if(k <= 0) break;
    }
    
    return answer;
}