#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(int i=0; i<quiz.size(); ++i)
    {
        vector<int> num;
        stringstream ss(quiz[i]);
        string s;
        int cnt = 0;
        
        while(ss >> s)
        {
            if(cnt == 0 || cnt == 2 || cnt == 4)
            {
                if(s[0] != '-') num.push_back(stoi(s));
                else num.push_back(stoi(s.substr(1,s.size() - 1)) * -1);
            }
            else if(cnt == 1)
            {
                if(s == "+") num.push_back(1);
                else if(s == "-") num.push_back(-1);
            }
            ++cnt;
        }
        
        if(num[0] + num[1] * num[2] == num[3]) answer.push_back("O");
        else answer.push_back("X");
    }
    
    
    return answer;
}