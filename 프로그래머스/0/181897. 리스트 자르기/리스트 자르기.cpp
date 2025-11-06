#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int idx = (n != 1) ? slicer[0] : 0;
    int idx2 = (n != 2) ? slicer[1] : num_list.size() -1;
    
    for(int i=idx; i<=idx2; ++i)
    {
        if(n == 4)
        {
            answer.push_back(num_list[i]);
            i += (slicer[2] - 1);
        }
        else
            answer.push_back(num_list[i]);
    }
    
    return answer;
}