#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int idx = 1;

    while(slice * idx < n)
        ++idx;
    
    return idx;
}