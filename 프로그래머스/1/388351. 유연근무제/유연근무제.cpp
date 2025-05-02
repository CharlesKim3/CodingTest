#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    
    for(int i=0; i<timelogs.size(); ++i)
    {
        bool check = true;
        int hour = (schedules[i]/100 + (schedules[i]%100+10)/60) * 100;
        int minute = (schedules[i]%100+10)%60;
        int goal = hour + minute;
        for(int j=0; j<timelogs[i].size(); ++j)
        {
            int skip = (startday + j)%7;
            if(skip == 6 || skip == 0) continue;          
            if(goal < timelogs[i][j])
                check = false;
        }
        if(check)
            ++answer;
    }
    
    return answer;
}