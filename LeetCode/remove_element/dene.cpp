#include <vector>
#include <iostream>
#include <string>

using namespace std;

/* int removeElement(vector<int>& nums, int val)
{
	int i = 0;
	int k = 0;
	int rep = 0;
	int len = nums.size() - 1;
	while (i <= len - rep) // TC O(len - rep)
	{
		if (nums[i] == val)
		{
			k = i;
			while (k < len - rep) // TC O(len - rep)
			{
				swap(nums[k], nums[k + 1]);
				k++;
			}
			rep ++;
		}
		else
			i++;
	}
	return len - rep + 1;
} RESSSS TC = O ((len-rep)*(len-rep)) = O (n^2)
//SC O(1);
 */

int removeElement(vector<int>& nums, int val)
{
    int j=0;
    for (int i=0; i<nums.size(); i++) //TC O(nums.size()) //SC O(1);
	{
        if(nums[i]!=val)
		{
            nums[j]=nums[i];
            j++;
        }
    }
    return j;
}

int main()
{
	vector<int> arr = {0,2,3,4,5,3,2,2,24,5,6,2,1,3,4,6,2,1,12,4,2,13,2,2,2,3,2,2};
	int val = 2;

	int res = removeElement(arr, val);

	for (int m: arr)
	{
		cout << m << " ";
	}
	cout << endl;
	cout << "res: " << res << endl;
}