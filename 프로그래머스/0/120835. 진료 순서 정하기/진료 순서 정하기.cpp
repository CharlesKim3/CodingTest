#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> tmp = emergency;
    sort(emergency.begin(),emergency.end(),greater<int>());
    
    map<int,int> m;
    int rank = 1;
    for(auto& e : emergency)
    {
        m[e] = rank;
        ++rank;
    }
    
    for(int i=0; i<tmp.size(); ++i)
    {
        if(m.find(tmp[i]) != m.end())
            answer.push_back(m[tmp[i]]);
    }
    
    
    return answer;
}