#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void intersect(vector<int>& nums1, vector<int>& nums2)
{
	vector<int> count_arr(1001, 0);
	vector<int> res;

	for (int i = 0; i < nums1.size() || i < nums2.size(); i++)
	{
		if (i < nums1.size())
			count_arr[nums1[i]]++;
		if (i < nums2.size())
			count_arr[nums2[i]]++;
	}
	for (int k = 0; k < count_arr.size(); k++)
	{
		if (count_arr[k] >= 2)
			res.push_back(k);
	}
	for (int m: res)
	{	
		std::cout << m << " ";
	}
}

int main()
{
		vector<int> vector1 = {4,9,5};
		vector<int> vector2 = {29,4,9,8,4};
		intersect(vector1, vector2);
}
