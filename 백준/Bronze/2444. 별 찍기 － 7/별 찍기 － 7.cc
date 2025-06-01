#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	for (int i = 1; i <= N - 1; ++i)
	{
		for (int j = N - i; j >= 1; --j) cout << " ";
		for (int j = 0; j < i * 2 - 1; ++j) cout << "*";
		cout << endl;
	}
	for (int i = 0; i < N * 2 - 1; ++i) cout << "*";
	cout << endl;

	for (int i = N - 1; i >= 1; --i)
	{
		for (int j = N - i; j >= 1; --j) cout << " ";
		for (int j = 0; j < i * 2 - 1; ++j) cout << "*";
		cout << endl;
	}
	


	return 0;
}