#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count = 0;
    for(auto d : s)
    {
        if(d == '(')
            ++count;
        else
        {
            if(count > 0) --count;
            else return false;
        }
    }
    

    return count ? false : true;
}