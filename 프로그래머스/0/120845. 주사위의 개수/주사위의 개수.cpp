#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 1;

    for(int i=0; i<box.size(); ++i)
    {
        if(box[i] / n > 0)
            answer *= box[i] / n;
        else if(box[i] / n == 0)
            answer = 0;
    }       
    
    return answer;
}