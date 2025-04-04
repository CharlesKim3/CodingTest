#include <string>
#include <vector>

long long guess(long long n)
{
    n = n & 1 ? n * 3 + 1 : n / 2;
    return n;
}

int solution(int num) {
    long long answer = num;
    int count = 0;
    
    if (answer == 1)
    {
        return 0;
    }

    while (answer > 1 && count < 500)
    {
        answer = guess(answer);
        count++;
    }

    return (count >= 500) ? -1 : count;
}