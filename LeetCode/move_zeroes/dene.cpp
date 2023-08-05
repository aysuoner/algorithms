#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void moveZeroes(vector<int>& nums)
{
	int k = nums.size() - 1;
	while(k >= 0 && nums[k] == 0)
		k--;
	int i = k;
	while (i >= 0)
	{
		if (nums[i] == 0)
		{
			nums.erase (nums.begin()+ i);
			nums.push_back(0);
		}
		i--;
	}
	for (int m: nums)
	cout << m << " ";
}

int main()
{
	vector<int> arr = {1 , 0, 4, 8, 0, 9, 0, 0};
	moveZeroes(arr);
}