#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(int i=0; i<s.size(); ++i)
    {
        char convert = s[i] + 1;
        int count = 0;
        
        // u v w x y z a b
        //   1   2 3 4 5
        while(count != index)
        {
            if(convert > 'z')
                convert = 'a';
            
            if(skip.find(convert) != string::npos)
            {
               convert += 1;
            }  
            else
            {
                ++count;
                convert += 1; 
            }
        }
        
        answer += (convert - 1);
    }
    
    return answer;
}