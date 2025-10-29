#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52,0);

    for(const auto& s : my_string)
    {
        if(s <= 'Z') answer[s - 'A']++;
        else if(s >= 'a') answer[s - 'a' + 26]++;
    }
    return answer;
}