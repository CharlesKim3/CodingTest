#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> score;
    string tmp = "";
    for(int i=0; i<dartResult.size(); ++i)
    {
        if('0' <= dartResult[i] && dartResult[i] <= '9')
            tmp += dartResult[i];
        
        if(dartResult[i] == 'S')
        {
            score.push_back(stoi(tmp));
            tmp = "";
        }
        
        else if(dartResult[i] == 'D')
        {
            score.push_back(pow(stoi(tmp),2));
            tmp = "";
        }
        
        else if(dartResult[i] == 'T')
        {
            score.push_back(pow(stoi(tmp),3));
            tmp = "";
        }
        
        if(dartResult[i] == '*')
        {
            int idx = score.size();
            for(int j= idx - 1; j >= idx - 2; --j)
            {
                if(j < 0)
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