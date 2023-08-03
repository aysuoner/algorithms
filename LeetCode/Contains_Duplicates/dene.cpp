#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
	for(int i = 0; i < nums.size() - 1; i++)
	{
		if (nums[i] == nums[i + 1])
			return true;
	}
	return false;
}

int main()
{
		vector<int> vector1 = {1, 2, 3, 4, 5, 6};
		std::cout << "ret: "<< containsDuplicate(vector1) << std::endl;
}