#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    int LeftHand = 10;
    int RightHand = 12;
    for(int i=0; i<numbers.size(); ++i)
    {
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            answer += "L";
            LeftHand = numbers[i];
        }
        
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            answer += "R";
            RightHand = numbers[i];
        }
        
        else
        {
            if(numbers[i] == 0) numbers[i] = 11;
            int leftDist = (abs(numbers[i] - LeftHand) / 3) + (abs(numbers[i] - LeftHand) % 3);
            int rightDist = (abs(numbers[i] - RightHand) / 3) + (abs(numbers[i] - RightHand) % 3);
            
            if(leftDist > rightDist)
            {
                answer += "R";
                RightHand = numbers[i];
            }
            
            else if(leftDist < rightDist)
            {
                answer += "L";
                LeftHand = numbers[i];
            }
            
            else
            {
                if(hand == "left")
                {
                    answer += "L";
                    LeftHand = numbers[i];
                }
                
                else
                {
                    answer += "R";
                    RightHand = numbers[i];
                }
            }
        }
    }
    
    return answer;
}