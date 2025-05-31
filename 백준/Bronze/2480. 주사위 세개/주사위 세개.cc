#include <iostream>
using namespace std;

int main()
{
	int* nums = new int[3];
	for (int i = 0; i < 3; ++i)
		cin >> nums[i];

	if (nums[0] == nums[1] && nums[1] == nums[2])
		cout << nums[0] * 1000 + 10000;
	else if (nums[0] == nums[1] || nums[0] == nums[2])
		cout << nums[0] * 100 + 1000;
	else if (nums[1] == nums[2])
		cout << nums[1] * 100 + 1000;
	else
	{
		int max = 0;
		for (int i = 0; i < 3; ++i)
			if (nums[i] > max) max = nums[i];

		cout << max * 100;
	}


	return 0;
}