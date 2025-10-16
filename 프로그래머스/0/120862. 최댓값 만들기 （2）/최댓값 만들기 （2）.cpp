#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int idx = numbers.size() -1;
    sort(numbers.begin(), numbers.end(),greater<int>());
    
    if(numbers.front() > 0 && numbers.back() > 0)
        answer = numbers[0] * numbers[1];
    else if(numbers.front() > 0 && numbers.back() < 0)
    {
        answer = numbers[0] * numbers[1] > numbers[idx] * numbers[idx -1] ?
            numbers[0] * numbers[1] : numbers[idx] * numbers[idx -1];
    }
    else if(numbers.front() < 0 && numbers.back() < 0)
        answer = numbers[idx] * numbers[idx -1];
 
    return answer;
}