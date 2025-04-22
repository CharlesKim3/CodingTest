#include <string>
#include <vector>
using namespace std;

bool compare(vector<int> a, vector<int> b, vector<int> c, vector<int> d)
{
  double x = b[0] - a[0];
  double y = b[1] - a[1];
  
  double x1 = d[0] - c[0];
  double y1 = d[1] - c[1];
    
   return y / x == y1 / x1 ? true : false;
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    if(compare(dots[0], dots[1], dots[2], dots[3])) return 1;
    if(compare(dots[0], dots[2], dots[1], dots[3])) return 1;
    if(compare(dots[0], dots[3], dots[1], dots[2])) return 1;
    
    return answer;
}