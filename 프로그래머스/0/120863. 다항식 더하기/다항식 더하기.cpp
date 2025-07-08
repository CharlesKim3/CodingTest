#include <string>
#include <vector>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    
    string tmp = "";
    string X = "";
    int numSum = 0;
    
    bool XOrNum = false;
    for(int i=0; i<polynomial.size(); ++i)
    {
        if(polynomial[i] != ' ' && polynomial[i] != '+')
            tmp += polynomial[i];
        else if(polynomial[i] == '+' && !tmp.empty())
        {
            for(auto t : tmp)
                if(t == 'x') XOrNum = true;
            
            if(XOrNum) X += tmp;
            else numSum += stoi(tmp);
            
            XOrNum = false;
            tmp = "";
        }
    }
    
    if(!tmp.empty())
    {
        for(auto t : tmp)
            if(t == 'x') XOrNum = true;
        if(XOrNum) X += tmp;
        else numSum += stoi(tmp);
    }
    
    
    string tmp2 = "";
    int xSum = 0;
    for(auto x : X)
    {
        if(x != 'x') tmp2 += x;
        else
        {
            if(tmp2.empty()) xSum +=1;
            else xSum += stoi(tmp2);
            tmp2 = "";
        }
    }
    
    if(xSum != 1)
    {
        if(xSum && numSum) answer = to_string(xSum) + "x + "+ to_string(numSum);
        else if(!xSum) answer = to_string(numSum);
        else if(!numSum) answer = to_string(xSum) + "x";
    }
    else
    {
        if(xSum && numSum) answer = "x + "+ to_string(numSum);
        else if(!numSum) answer = "x";
    }
    
    
    return answer;
}