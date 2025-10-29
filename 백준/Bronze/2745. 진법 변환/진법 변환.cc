#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string N;
	int B;
	cin >> N >> B;

	int result = 0, dg = 1;
	for (auto n : N)
	{
		if (n != '0')
		{
			if (n >= 'A')
			{
				result += (n - 55) * pow(B, N.size() - dg);
			}
			else
				result += (n - '0') * pow(B, N.size() - dg);
		}
		++dg;
	}
	cout << result;
	
	return 0;
}