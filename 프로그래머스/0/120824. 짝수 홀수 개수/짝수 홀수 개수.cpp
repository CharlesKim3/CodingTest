#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(2,0);
    
    for(auto n : num_list)
        n & 1 == 1 ? answer[1]++ : answer[0]++;
    
    return answer;
}