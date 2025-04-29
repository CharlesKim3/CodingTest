#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer(4,0);
    
    for(int i=0; i<wallpaper.size(); ++i)
    {
        int tmp = wallpaper[i].find("#");
        if(tmp != string::npos)
        {
            answer[0] = i;
            answer[1] = tmp;
            answer[2] = i;
            answer[3] = tmp;
            break;
        }
    }
    
     for(int i=0; i<wallpaper.size(); ++i)
    {
        for(int j=0; j<wallpaper[i].size(); ++j)
        {
            if(wallpaper[i][j] == '#' && answer[1] > j)
                answer[1] = j;
            if(wallpaper[i][j] == '#' && answer[2] < i)
                answer[2] = i;
            if(wallpaper[i][j] == '#' && answer[3] < j)
                answer[3] = j;
        }
    }
    answer[2] += 1;
    answer[3] += 1;
    
    return answer;
}