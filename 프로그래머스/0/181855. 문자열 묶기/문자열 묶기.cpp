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
    
    sort(cnt.begin(), cnt.end(),greater<int>());
    answer = cnt[0];
    return answer;
}