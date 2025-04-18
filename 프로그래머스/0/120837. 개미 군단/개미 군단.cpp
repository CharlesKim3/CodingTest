#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    vector<int> ant = {5,3,1};
    
    while(hp > 0)
    {
        if(hp >= 5)
        {
            answer += hp / ant[0];
            hp %= ant[0];
        }
        
        else if(hp >= 3)
        {
            answer += hp / ant[1];
            hp %= ant[1];
        }
        
        else
        {
            answer += hp / ant[2];
            hp %= ant[2]; 
        }
    }
    return answer;
}