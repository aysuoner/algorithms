#include <vector>
#include <iostream>

using namespace std;

void	merge(std::vector<int> &arr, int s, int e, int mid)
{
	std::vector<int> tmp;
	int i = 0;
	int l;
	int r;
	l = s;
	r = mid + 1;
	while (l <= mid && r <= e)
	{
		if (arr[l] <= arr[r])
		{
			tmp.push_back(arr[l]);
			l++;
		}
		else
		{
			tmp.push_back(arr[r]);
			r++;
		}
	}
	while(l <= mid)
	{
		tmp.push_back(arr[l]);
		l++;
	}
	while(r <= e)
	{
		tmp.push_back(arr[r]);
		r++;
	}

	for (int i = s; i <= e; ++i)
		arr[i] = tmp[i - s];
}

void	mergeSort(std::vector<int> &arr, int s, int e)
{
	if (e - s >= 1)
	{
		int mid = (s + e) / 2;
		mergeSort(arr, s, mid);
		mergeSort(arr, mid + 1, e);
		merge(arr,s,e,mid);
	}
}

int main()
{
	std::vector<int> arr = {2,1,-1,5,4,3};
	int len = arr.size();
	mergeSort(arr,0,len-1);
	for (int k: arr)
	{
		cout << k << " ";
	}
	cout << endl;
}