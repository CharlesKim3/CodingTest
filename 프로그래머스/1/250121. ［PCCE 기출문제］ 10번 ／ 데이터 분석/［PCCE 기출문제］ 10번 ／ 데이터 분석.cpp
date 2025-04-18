#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    unordered_map<string,int> m = {{"code",0},{"date",1},
                                  {"maximum",2},{"remain",3}};
    
    for(int i=0; i<data.size(); ++i)
    {
        if(data[i][m[ext]] < val_ext)
            answer.push_back(data[i]);
    }
    
    sort(answer.begin(),answer.end(),[&](vector<int> prev,vector<int> next){
        return prev[m[sort_by]] < next[m[sort_by]];
    });
    
    return answer;
}