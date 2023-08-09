#include <iostream>
#include <vector>

using namespace std;

void Merge(vector<int>& v, int s, int m, int e)
{
	vector<int> temp;

	int i, j;
	i = s;
	j = m + 1;
	while (i <= m && j <= e)
	{
		if (v[i] <= v[j])
		{
			temp.push_back(v[i]);
			++i;
		}
		else
		{
			temp.push_back(v[j]);
			++j;
		}
	}

	while (i <= m)
	{
		temp.push_back(v[i]);
		++i;
	}

	while (j <= e)
	{
		temp.push_back(v[j]);
		++j;
	}

	for (int i = s; i <= e; ++i)
		v[i] = temp[i - s];

	for (int k: v)
	{
		cout << k << " ";
	}
	cout << endl;
}

void MergeSort(vector<int>& v, int s, int e)
{
	if (e - s >= 1)
	{
		int m = (s + e) / 2;
		MergeSort(v, s, m);
		MergeSort(v, m + 1, e);
		cout << endl;
		cout << "s: " << s << " e: " << e << " m: " << m << std::endl;
		Merge(v, s, m, e);
	}
//	cout << "s: " << s << " e: " << e << " m: " << std::endl;
}
int main(void)
{
	vector<int> v = {2,1,-1,5,4,3};
	int size_arr = v.size();
	MergeSort(v, 0, size_arr - 1);

}