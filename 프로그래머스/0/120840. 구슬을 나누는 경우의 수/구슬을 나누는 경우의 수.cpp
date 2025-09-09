#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    int answer = 0;
    
    vector<int> tmp(balls, 0);
    for(int i=0; i< tmp.size(); ++i)
        tmp[i] = i + 1;
    int repeat = balls - share;
    int idx = tmp.size() - 1;
    double up = 1;
    while(repeat)
    {
        up *= tmp[idx];
        --idx;
        --repeat;
    }
    
    double down = 1;
    for(int i=1; i<=balls - share; ++i)
        down *= i;

    answer = up / down;
    return answer;
}