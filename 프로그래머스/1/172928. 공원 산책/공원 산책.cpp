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
        int dx = move_x[i];
        int dy = move_y[i];
        
        for(int step = 1; step <= abs(dx + dy); ++step)
        {
            int nx = start[1] + (dx != 0 ? step * (dx > 0 ? 1 : -1) : 0);
            int ny = start[0] + (dy != 0 ? step * (dy > 0 ? 1 : -1) : 0);

            if(ny < 0 || ny >= park.size() || nx < 0 || nx >= park[0].size() || park[ny][nx] == 'X')
            {
                check = false;
                break;
            }
        }

        if(check)
        {
            start[0] += dy;
            start[1] += dx;
        }
    }

    answer = start;
    return answer;
}
