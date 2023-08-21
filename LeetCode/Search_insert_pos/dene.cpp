#include <vector>
#include <iostream>

using namespace std;

int	searchInsert(vector<int>& nums, int target)
{
	int	mid;
	int	left = 0;
	int right = nums.size() - 1;
	mid = (right + left) / 2;
	while (left <= right)
	{
		mid = (right + left) / 2;
		if (nums[mid] == target)
			return mid;
		else if (target > nums[mid])
			left = mid + 1;
		else if (target < nums[mid])
			right = mid - 1;
	}
	return left;
}

int main(void)
{
	vector<int> nums = {0,1,3,6,7,8,9};
	int tar = 5;
	cout << searchInsert(nums, tar) << endl;
	return 0;
}