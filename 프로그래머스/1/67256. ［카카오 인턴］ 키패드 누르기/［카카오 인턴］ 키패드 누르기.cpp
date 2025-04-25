#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    int leftHand = 10;
    int rightHand = 12;
    for(auto& n : numbers)
    {
        if(n == 1 || n == 4 || n == 7)
        {
            answer += "L";
            leftHand = n;
        }
        
        else if(n == 3 || n ==6 || n == 9)
        {
            answer += "R";
            rightHand = n;
        }
        
        else
        {
            if(n == 0) n =11;
            int leftDist = (abs(n - leftHand) / 3) + (abs(n - leftHand) % 3);
            int rightDist = (abs(n - rightHand) / 3) + (abs(n - rightHand) % 3);

            if(leftDist > rightDist)
            {
                answer += "R";
                rightHand = n;
            }
            
            else if(rightDist > leftDist)
            {
                answer += "L";
                leftHand = n;
            }
            
            else 
            {
                if(hand == "left")
                {
                    answer += "L";
                    leftHand = n;
                }
                else
                {
                    answer += "R";
                    rightHand = n;
                }
            }
        }
    }
    
    return answer;
}