#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket;
    int idx = -1;
    
    for(int i=0; i<moves.size(); ++i)
    {
        for(int j=0; j <board.size(); ++j)
        {
            if(board[j][moves[i] - 1] > 0)
            {
                basket.push_back(board[j][moves[i] - 1]);
                board[j][moves[i] - 1] = 0;
                ++idx;
                break;
            }
        }
        
        if(basket.size() > 1)
        {
            if(basket[idx] == basket[idx - 1])
            {
                basket.pop_back();
                basket.pop_back();
                idx -=2;
                answer +=2;
            }
        }
    }
    
    
    // basket 4 3 1 1 3 2 0 4             
    // moves  1 5 3 5 1 2 1 4 
    //                           
    // 0 0 0 0 0       
    // 0 0 0 0 0               
    // 0 0 5 0 0                
    // 0 2 4 0 2                
    // 0 5 1 3 1              
    
    return answer;
}