#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(auto s : my_string)
    {
        if(48 < s && s <=57)
            answer += s - 48;
    }
    return answer;
}