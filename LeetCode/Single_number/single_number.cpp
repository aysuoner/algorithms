class Solution {
public:
int singleNumber(vector<int>& nums)
{
	bool dupli = false;
	int i = 0;
    sort(nums.begin(), nums.end());
	for(; i < nums.size() - 1; i++)
	{
		if (nums[i] == nums[i + 1])
			dupli = true;
		else if (nums[i] != nums[i + 1] && !dupli)
			return nums[i];
		else if (nums[i] != nums[i + 1] && dupli)
			dupli = false;
	}
	return nums[i];
}
};