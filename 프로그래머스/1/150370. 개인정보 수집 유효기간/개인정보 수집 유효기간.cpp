#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<string, int> m;
    for(auto& t : terms)
        m[t.substr(0,1)] = stoi(t.substr(2));
    
    for(int i=0; i<privacies.size(); ++i)
    {
        int year = stoi(privacies[i].substr(0,4));
        int month = stoi(privacies[i].substr(5,2));
        int date = stoi(privacies[i].substr(8,2));
        int cal = m[privacies[i].substr(11)];
        
        if(cal + month >= 13)
        {
            if((cal + month) % 12 == 0)
            {
                year += cal / 12;
                month += cal % 12;
            }
            else
            {
                year += (cal + month) / 12;
                month = (cal + month) % 12;
            }
        }
        else
            month += cal;
        
        if(date == 1)
        {
            --month;
            date = 28;
        }
        else
            --date;
        
        if(stoi(today.substr(0,4)) > year)
            answer.push_back(i+1);
        else if(stoi(today.substr(0,4)) == year)
        {
            if(stoi(today.substr(5,2)) > month)
                answer.push_back(i+1);
            else if(stoi(today.substr(5,2)) == month)
            {
                if(stoi(today.substr(8,2)) > date)
                     answer.push_back(i+1);
            }
        }
    }
    
    return answer;
}