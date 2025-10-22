#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(const auto& q : quiz)
    {
        string x, y, z, op;
        stringstream ss(q);
        ss >> x; ss >> op; ss >>y; ss >> z; ss >> z;
        
        int result;
        switch(op[0])
        {
            case '+':
                result = stoi(x) + stoi(y);
                break;
                
            case '-':
                result = stoi(x) - stoi(y);
                break;
                
            default:
                break;
        }
        
        if(result == stoi(z)) answer.push_back("O");
        else answer.push_back("X");
    }
    
    return answer;
}