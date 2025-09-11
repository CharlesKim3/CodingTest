#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(),array.end());
    int answer = array[0];
    int dis = abs(n - array[0]);
    
    for(int i=0; i<array.size(); ++i)
    {
        if(dis > abs(n - array[i]))
        {
            answer = array[i];
            dis = abs(n - array[i]);
        }
    }
    
    return answer;
}