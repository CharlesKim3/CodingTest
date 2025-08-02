#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    
    auto it = find(num_list.begin(),num_list.end(),n);
    
    return it != num_list.end() ? 1 : 0;
}