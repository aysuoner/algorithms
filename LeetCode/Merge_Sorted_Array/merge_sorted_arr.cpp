#include <vector>
#include <string>
#include <iostream>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
    int a = n;
    int i = 0, b = 0;
    std::rotate(nums1.begin(), nums1.begin() + m, nums1.end());
    while (a < m + n && b < n)
	{
    	if (nums1[a] < nums2[b]) {
    	    std::swap(nums1[i], nums1[a]);
    	    a++;
		}
    	else {
    	    nums1[i] = nums2[b];
    	    b++;
		}
    	i++;
    }
    while (b < n) {
		nums1[i] = nums2[b];
		b++; i++;
    }
}

int main()
{
	std::vector<int> nums1 = {2,0};	
	std::vector<int> nums2 = {1};
	merge (nums1, 1, nums2, 1);
	for (int x : nums1)
	{
		std::cout << x << " ";
	}
}