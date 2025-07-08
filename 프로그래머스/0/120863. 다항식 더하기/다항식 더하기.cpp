#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    string tmp = "";
    
    int xSum = 0, nSum = 0;
    while(getline(ss, tmp, ' '))
    {
        if(tmp.back() == 'x')
        {
            if(tmp.size() == 1) ++xSum;
            else xSum += stoi(tmp.substr(0, tmp.size() - 1));
        }
        else if(tmp != "+") nSum += stoi(tmp);
    }
    
    if(!xSum) return to_string(nSum);
    else
    {
        string temp = "";
        if(xSum == 1) temp = "x";
        else temp = to_string(xSum) + "x";
        if(nSum) return temp + " + " + to_string(nSum);
        else return temp;
    }
}