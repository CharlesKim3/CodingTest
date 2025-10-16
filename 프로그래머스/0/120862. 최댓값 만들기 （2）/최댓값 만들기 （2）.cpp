#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    int idx = numbers.size();
    
    return max(numbers[0] * numbers[1], numbers[idx -1] * numbers[idx - 2]);
}