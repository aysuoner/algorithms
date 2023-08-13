#include <string>
#include <iostream>
#include <map>

int firstUniq(std::string &s)
{
	std::map<char,int>mp;
	int i;
	for(i = 0; i < s.length(); i++)
	{
	    mp[s[i]]++;
	}
	for(i = 0; i < s.length(); i++)
	{
		if(mp[s[i]]==1)
		{
		    return i;
		}
	}
	return -1;
}

int main()
{
    std::string s = "aabbv";
    int res = firstUniq(s);
    
    std::cout << "Index: " << res << std::endl;
    return 0;
}
