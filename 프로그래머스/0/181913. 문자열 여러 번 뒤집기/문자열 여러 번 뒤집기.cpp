#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    
    for(vector<int>& q : queries)
    {
        int start = q[0], end = q[1] + 1; 
        reverse(my_string.begin() + start, my_string.begin() + end);
    }
    
    return my_string;
}