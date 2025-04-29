#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int lux, luy, rdx, rdy;
    
   for(int i=0; i<wallpaper.size(); ++i)
   {
       luy = wallpaper[i].find('#');
       if(luy != string::npos)
       {
           lux = i;
           rdx = i;
           rdy = luy;
           break;
       }
   }
    
    for(int i=0; i<wallpaper.size(); ++i)
    {
        for(int j=0; j<wallpaper[i].size(); ++j)
        {
            if(wallpaper[i][j] == '#' && lux > i)
                lux = i;
            if(wallpaper[i][j] == '#' && luy > j)
                luy = j;
            if(wallpaper[i][j] == '#' && rdx < i)
                rdx = i;
            if(wallpaper[i][j] == '#' && rdy < j)
                rdy = j;
        }
    }

    
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx + 1);
    answer.push_back(rdy + 1);
    
    return answer;
}