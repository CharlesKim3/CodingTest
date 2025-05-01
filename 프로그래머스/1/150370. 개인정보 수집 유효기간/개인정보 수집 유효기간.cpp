#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<string,int> m;
    for(int i=0; i<terms.size(); ++i)
        m[terms[i].substr(0,1)] = stoi(terms[i].substr(2));
    
    for(int i=0; i<privacies.size(); ++i)
    {
        int year = stoi(privacies[i].substr(0,4));
        int month = stoi(privacies[i].substr(5,2));
        int date = stoi(privacies[i].substr(8,2));
        int calculate = m[privacies[i].substr(11)];

        if(calculate + month >= 13)
        {
            if((calculate + month) % 12 != 0)
            {
                year += (calculate + month) / 12;
                month = (calculate + month) % 12;
            }
            else
            {
                year += calculate / 12;
                month += calculate % 12;
            }
        }
        else
            month += calculate;
        
        if(date - 1 == 0)
        {
            month -= 1;
            date = 28;
        }
        else
            --date;
        if(stoi(today.substr(0,4)) > year)
            answer.push_back(i + 1);
        else if(stoi(today.substr(0,4)) == year)
        {
            if(stoi(today.substr(5,2)) > month)
                answer.push_back(i + 1);
            else if(stoi(today.substr(5,2)) == month)
            {
                if(stoi(today.substr(8,2)) > date)
                    answer.push_back(i + 1);
            }
        }
    }
    
    return answer;
}