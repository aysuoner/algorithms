#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int majorityElement(vector<int>& nums)
{
	unordered_map < int, int > hash;
	int maxcount = nums[0], rep = 1;
	for (int i = 0; i < nums.size(); i++)
	{
		hash[nums[i]]++;
		if (rep < hash[nums[i]])
		{
			rep = hash[nums[i]];
			maxcount = nums[i];
		}
	}
	return maxcount;
}

int main()
{
		vector<int> vector1 = {0,2,2,2,1,0,6,6,6,6,0,0,0,4,4,1,1,16,6,6,6,6,6,6};
		int res = majorityElement(vector1);
		cout  << "res: " << res << endl;
}
