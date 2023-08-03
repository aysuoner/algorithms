#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int removeDuplicates(vector<int>& nums)
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
    }

int main()
{
		vector<int> vector1 = {1, 1, 1, 1, 1, 1, 2, 3, 3, 3, 4, 5, 6, 6};
		removeDuplicates(vector1);
}