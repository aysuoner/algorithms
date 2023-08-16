#include <vector>
#include <iostream>
#include <string>

using namespace std;

void	merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	int curr = m + n - 1;
	m--;
	n--;
	while(m >= 0 && n >= 0) //TC O(m)
	{
		if (nums1[m] > nums2[n])
		{
			nums1[curr] = nums1[m];
			m--;			
		}
		else
		{
			nums1[curr] = nums2[n];
			n--;
		}
		curr--;
	}
	while (n >= 0) //TC O(n)
	{
		nums1[curr] = nums2[n];
		n--;
		curr--;
	}
} //TC O(m + n);
  //SC O(1);

int main()
{
	vector<int> arr1 = {4,5,6,0,0,0};
	vector<int> arr2 = {1,2,3};

	merge(arr1,3,arr2,3);
	for (int m: arr1)
		cout << m << " ";
}