#include <vector>
#include <iostream>

using namespace std;

string	longestCommonPrefix(vector<string>& strs)
{
	int		k = 0;
	int		i = 0;
	char	c;
	while (k < strs[i].size())
	{
		c =  strs[i][k];
		while (i < strs.size())
		{
			if (strs[i][k] == c)
				i++;
			else
				return strs[0].substr(0,k);
		}
		i = 0;
		k++;
	}
	return strs[0].substr(0,k);
}

int main()
{
	vector<string> s = {"aysuoner", "ay", "ay"};
	cout << "." << longestCommonPrefix(s) << "." << endl;
}