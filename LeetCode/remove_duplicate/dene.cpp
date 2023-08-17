#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

/* int removeDuplicates(vector<int>& nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
				std::cout <<  "i: " << i << " ";
				std::cout << nums[i];
				std::cout << "   ";
				std::cout << nums[i + 1];
				std::cout << std::endl;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
		for (int m : nums)
			std::cout << m << " ";
		std::cout << std::endl;
		std::cout << nums.size();
        return (nums.size());
    } */

int removeDuplicates(vector<int>& nums)
{
	int i = 0;
	int j = 0;
	int len = nums.size();
	if (len >= 1)
	{
		nums[i] = nums[j];
		j++;
	}
	else
		return 0;
	while (j < len)
	{
		if (nums[i] != nums[j])
		{
			i++;
			nums[i] = nums[j];
		}
		j++;
	}
	while(len > i + 1)
	{
		nums.pop_back();
		len--;
	}
	return i + 1;
}

int main()
{
		vector<int> vector1 = {0,0,0,1,1,1,1,2,3,3,4,4,5,5,6,7,8,9,9,9};
		int res = removeDuplicates(vector1);
		for (int m = 0; m < vector1.size(); m++)
			cout <<  vector1[m] << " ";
		cout << '\n' << "res: " << res ;
}
