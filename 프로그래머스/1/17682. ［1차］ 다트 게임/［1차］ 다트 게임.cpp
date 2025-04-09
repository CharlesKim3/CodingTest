#include <string>
#include <cmath>
#include <vector>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    
    string tmp = "";
    vector<int> score;
    for(int i=0; i<dartResult.size(); ++i)
    {
        if(48 <= dartResult[i] && dartResult[i] <= 57)
            tmp += dartResult[i];
        
        if(dartResult[i] == 'S')
        {
            score.push_back(stoi(tmp));
            tmp = "";
            
        }
        
        else if(dartResult[i] == 'D')
        {
            score.push_back(pow(stoi(tmp), 2));
            tmp = "";
        }
        
        else if(dartResult[i] == 'T')
        {
            score.push_back(pow(stoi(tmp), 3));
            tmp = "";
        }
        
        if(dartResult[i] == '*')
        {
            int last = score.size() - 1;
            for (int j = last; j >= last - 1; --j)
            {
                if (j < 0)
                    break;
                score[j] *= 2;
            }
        }
        
        else if(dartResult[i] == '#')
            score[score.size() -1] *= -1;
    }
    
    for(auto& s : score)
        answer += s;
    
    
    return answer;
}