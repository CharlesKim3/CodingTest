#include <string>
#include <vector>

using namespace std;

vector<int> result (vector<int> a, vector<vector<int>> b)
{
    vector<int> tmp;
    for(int i=0; i<b[0].size(); ++i)
    {
        int sum = 0;
        for(int j=0; j<b.size(); ++j)
        {
            sum += a[j] * b[j][i];
        }
        tmp.push_back(sum);
    }
    return tmp;
}

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for(int i=0; i<arr1.size(); ++i)
    {
        answer.push_back(result(arr1[i], arr2));
    }
    return answer;
}