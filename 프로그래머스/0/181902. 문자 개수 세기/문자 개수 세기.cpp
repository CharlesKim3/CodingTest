#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52,0);
    vector<int> test;
    // 65 ~ 90 
    // 97 ~ 122
    for(const auto& s : my_string)
    {
        if('A'<= s && s <= 'Z') answer[s - 'A']++;
        else if('a' <= s && s <= 'z') answer[s - 'a' + 26]++;
    }
    return answer;
}