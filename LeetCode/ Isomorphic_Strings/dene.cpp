#include <iostream>
#include <map>

using namespace std;

bool	isIsomorphic(string s, string t)
{
	unordered_map<char, char> ump_s;
	unordered_map<char, char> ump_t;
	for (int i = 0; i < s.length(); i++)
	{
		if ((ump_s[s[i]] && ump_s[s[i]] != t[i]) || \
			(ump_t[t[i]] && ump_t[t[i]] != s[i]) )
			return false;
		ump_s[s[i]] = t[i];
		ump_t[t[i]] = s[i];
	}
	return true;
}

int main()
{
	string s = "";
	string t = "add";

	cout << "res:" << isIsomorphic(s,t) << endl; 
	return 0;
}