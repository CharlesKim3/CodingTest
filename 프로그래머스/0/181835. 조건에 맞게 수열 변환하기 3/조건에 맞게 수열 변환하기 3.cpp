#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    if(k & 1 == 1)
    {
        for(int& a : arr)
            a *= k;
    }
    else
    {
        for(int& a : arr)
            a += k;
    }
    return arr;
}