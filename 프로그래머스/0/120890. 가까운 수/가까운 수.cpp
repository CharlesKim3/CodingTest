#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    array.push_back(n);
    sort(array.begin(),array.end());
    auto it = find(array.begin(),array.end(), n);

    int idx = it - array.begin();
    if(idx == array.size() - 1)
        return array[idx - 1];
    else if(idx == 0)
        return array[1];
    else
    {
        int prev = array[idx - 1];
        int next = array[idx + 1];
        return abs(n - prev) <= abs(n - next) ? prev : next;
    }
}