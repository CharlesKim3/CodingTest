#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int space = N;
	int star = 1;
	for (int i = 1; i <= N - 1; ++i)
	{
		for (int j = 0; j < space - i; ++j)
			cout << ' ';
		for (int j = 1; j <= star; ++j)
			cout << '*';

		star += 2;
		cout << endl;
	}

	for (int i = 0; i < N * 2 - 1; ++i)
		cout << '*';
	cout << endl;
	star -= 2;

	for (int i = N - 1; i >= 1; --i)
	{
		for (int j = 0; j < space - i; ++j)
			cout << ' ';
		for (int j = 1; j <= star; ++j)
			cout << '*';

		star -= 2;
		cout << endl;
	}


	return 0;
}