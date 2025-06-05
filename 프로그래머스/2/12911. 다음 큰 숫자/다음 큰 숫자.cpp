#include <string>
#include <vector>

using namespace std;
int count(int a)
{
    int countOne = 0;
    while(a > 0)
    {
        if(a % 2 ==1)
            ++countOne;
        a /= 2;
    }
    return countOne; 
}

int solution(int n) {
    int answer = 0;
    int countN = count(n);
    
    while(answer == 0)
    {
        ++n;
        if(count(n) == countN)
            answer = n;
    }
    return answer;
}