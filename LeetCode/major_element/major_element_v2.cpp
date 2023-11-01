#include <vector>
#include <iostream>

using namespace std;

int majorityElement(vector<int>& nums)
{
	int max_rep = nums[0];
	int count = 1;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] == max_rep)
			count++;
		else if (nums[i] != max_rep)
			count--;
		if (count == 0)
		{
			max_rep = nums[i];
			count++;
		}
	}
	return max_rep;
}

int main()
{
		vector<int> vector1 = {3,2,3,2,4,4,2,4,4,4,3,2,4};
		int res = majorityElement(vector1);
		cout  << "res: " << res << endl;
}