#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i=0; i<queries.size(); ++i)
    {
        vector<int> tmp;
        for(int j = queries[i][0]; j<=queries[i][1]; ++j)
        {
           if(queries[i][2] < arr[j])
               tmp.push_back(arr[j]);
        }
        
        if(tmp.empty())
            answer.push_back(-1);
        else
            answer.push_back(*min_element(tmp.begin(),tmp.end()));
    }
    
    return answer;
}