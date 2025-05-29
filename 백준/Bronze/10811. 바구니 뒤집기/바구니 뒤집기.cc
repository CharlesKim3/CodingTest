#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	int* basket = new int[n];
	for (int i = 0; i <n; ++i)
		basket[i] = i + 1;

	for (int i = 0; i < m; ++i)
	{
		int begin, end;
		cin >> begin >> end;
		int* tmp = new int[end - begin + 1];
		int idx = 0, idx2 = 0;
		for (int j = end; j >= begin; --j)
		{
			tmp[idx] = basket[j - 1];
			++idx;
		}
		
		for (int k = begin -1; k < end; ++k)
		{
			basket[k] = tmp[idx2];
			++idx2;
		}	
	}
	
	for (int i = 0; i < n; ++i)
	{
		cout << basket[i] << " ";
	}
	
	return 0;
}