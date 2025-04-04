#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    
    for(auto& em : emergency)
    {
        int count = 1;
        for(auto & e : emergency)
        {
            if(em < e)
                count += 1;
        }
        answer.push_back(count);
    }
    return answer;
}