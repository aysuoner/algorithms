#include <iostream>
#include <vector>

using namespace std;

std::vector<int>	Merge(std::vector<int> v1, std::vector<int> v2)
{
	int l = 0;
	int r = 0;
	std::vector<int> tmp;
	while(l < v1.size() && r < v2.size())
	{
		if (v1[l] <= v2[r])
		{
			tmp.push_back(v1[l]);
			l++;
		}
		else
		{
			tmp.push_back(v2[r]);
			r++;
		}
	}
	for(; l < v1.size(); l++)
		tmp.push_back(v1[l]);

	for(; r < v2.size(); r++)
		tmp.push_back(v2[r]);

	return tmp;
}

int main()
{
	std::vector<int> v1 = {-1,4};
	std::vector<int> v2 = {1,2,8};
	std::vector<int> res;
	res = Merge(v1,v2);
	for (int k: res)
		cout << k << " ";
}