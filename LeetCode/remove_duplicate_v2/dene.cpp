#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int removeDuplicates(vector<int>& nums)
{
    int i = 1;
    int x = 0;
    bool count = true;
    while (i < nums.size())
    {
        if (nums[x] != nums[i])
        {
            x++;
            nums[x] = nums[i];
            count = true;
        }
        else if ((nums[x] == nums[i]) && count == true)
        {
            x++;
            nums[x] = nums[i];
            count = false;
        }
        i++;
    }
    return ++x;
}

int main()
{
		vector<int> vector1 = {1,1,1,2,2,3};
		int res = removeDuplicates(vector1);
		for (int m = 0; m <= res; m++)
			cout <<  vector1[m] << " ";
		cout << '\n' << "res: " << res ;
}
