#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a,int b)
{
    return (a * b) / gcd(a,b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int down = lcm(denom1, denom2);
    int up = ((down / denom1) * numer1) + ((down / denom2) * numer2);
    
    int multi = gcd(down,up);
    
    answer.push_back(up / multi);
    answer.push_back(down / multi);
    return answer;
}