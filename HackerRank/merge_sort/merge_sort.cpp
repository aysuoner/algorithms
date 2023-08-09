#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> merge(vector <int> &left_arr, vector <int> &right_arr)
{
	vector <int> merge_arr;
	int i = 0;
	int k = 0;
	while (i  < left_arr.size() && k < right_arr.size())
	{
		if (left_arr[i] <= right_arr[k])
		{
			merge_arr.push_back(left_arr[i]);
			i++;
		}
		else
		{
			merge_arr.push_back(right_arr[k]);
			k++;
		}
	}
	while(i < left_arr.size())
	{
		merge_arr.push_back(left_arr[i]);
		i++;	
	}
	while(k < right_arr.size())
	{
		merge_arr.push_back(right_arr[k]);
		k++;	
	}
	left_arr.clear();
	right_arr.clear();
	return merge_arr;
}

void mergeSort(vector <int> &arr, int n)
{
	int mid = n / 2;
	vector<int> left_arr(arr.begin(), arr.begin() + mid);
	vector<int> right_arr(arr.begin() + mid, arr.end());
	if (left_arr.size() > 1)
	{
		mergeSort(left_arr, mid);
	}
	if (right_arr.size() > 1)
	{
		mergeSort(right_arr, n - mid);
	}
	arr = merge(left_arr, right_arr);
}

int main()
{
	vector<int> arr = {2,1,-9,4,5,3};
	int size_arr =arr.size();
	mergeSort(arr, size_arr);
	for (int m: arr)
	{
		cout << m << " ";
	}
}