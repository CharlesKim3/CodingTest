#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 1;
    for (int i = 0; i < size(box); i++)
    {
        answer *= (box[i] / n);
    }
    return answer; 
    
    return answer;
}