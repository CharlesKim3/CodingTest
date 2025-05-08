#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    vector<int> start(2,0);
    for(int i=0; i<park.size(); ++i)
    {
        for(int j=0; j<park[i].size(); ++j)
        {
            if(park[i][j] == 'S')
            {
                start[0] = i;
                start[1] = j;    
            }
        }
    }

    vector<int> move_x(routes.size());
    vector<int> move_y(routes.size());
    for(int i=0; i<routes.size(); ++i)
    {
        if(routes[i][0] == 'E')
        {
            move_x[i] = routes[i][2] - '0';
            move_y[i] = 0;
        }
        else if(routes[i][0] == 'W')
        {
            move_x[i] = (routes[i][2]- '0') * -1;
            move_y[i] = 0;
        }
        else if(routes[i][0] == 'S')
        {
            move_y[i] = routes[i][2] - '0';
            move_x[i] = 0;
        }
        else if(routes[i][0] == 'N')
        {
            move_y[i] = (routes[i][2]- '0') * -1;
            move_x[i] = 0;
        }
    }
    
    for(int i=0; i<move_x.size(); ++i)
    {
        bool check = true;
        int check_x = move_x[i];
        int check_y = move_y[i];
        
        for(int step = 1; step <= abs(check_x + check_y); ++step)
        {
           int nx = start[1] + (check_x != 0 ? step * (check_x > 0 ? 1 : -1) : 0);
           int ny = start[0] + (check_y != 0 ? step * (check_y > 0 ? 1 : -1) : 0);

            if(0<= nx && nx < park[0].size() &&
               0<= ny && ny < park.size() && park[ny][nx] != 'X')
                continue;
            else
                check = false;
            
        }
        if(check)
        {
            start[0] += check_y;
            start[1] += check_x;
        } 
    }

    answer = start;
    return answer;
}
