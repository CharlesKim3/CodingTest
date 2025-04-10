#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer(targets.size(), 0);
    
    for(int i=0; i<targets.size(); ++i)
    {
        int idx = 0;
        while(idx < targets[i].size())
        {
            int tmp = -1;
            bool check = false;
            for(auto& k : keymap)
            {
                int it = k.find(targets[i][idx]);
                if(it != string::npos && (it < tmp || tmp == -1))
                {
                    tmp = it + 1;
                    check = true;
                }
            }
            if(check)
                answer[i] += tmp;
            else
            {
                answer[i] = -1;
                break;
            }
            ++idx;
        }
    }
    
    return answer;
}