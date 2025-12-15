#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> cnt(31,0);
    
    for(const auto& s : strArr)
    {
        cnt[s.size()]++;
    }
    
    answer = *max_element(cnt.begin(), cnt.end());
    return answer;
}