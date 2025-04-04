#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer(2,0);
    vector<int> rank = {6,6,5,4,3,2,1};
    
    unordered_map<int,int> m;
    for(auto& w : win_nums)
        m.insert({w, 1});
    
    for(int i=0; i<lottos.size(); ++i)
    {
        if(lottos[i] == 0)
            answer[0]++;
        else if(m.find(lottos[i]) != m.end())
        {
            answer[0]++;
            answer[1]++;
        }
    }
    
    answer[0] = rank[answer[0]];
    answer[1] = rank[answer[1]];
    
    return answer;
}