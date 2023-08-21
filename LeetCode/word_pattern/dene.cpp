#include <iostream>
#include <sstream>
#include <map>

using namespace std;

bool	wordPattern(string pattern, string s)
{
	unordered_map<char, string>	ump_1; // <a   ====> dog>
	unordered_map<string, char>	ump_2; // <dog ====> a>
	istringstream	ss(s);
	string			word;
	int i = 0;
	while (i < pattern.length() && ss >> word) //TC O(min(i,word)) // hangi parametre az ise o kadar döngüye girecek
 	{
		if ((ump_1[pattern[i]].size() > 0 && ump_1[pattern[i]] != word) || \
			(ump_2[word] && ump_2[word] != pattern[i]))
			return false;
		ump_1[pattern[i]] = word;
		ump_2[word] = pattern[i];
		i++;
	}
	if (i < pattern.length() || ss >> word)
		return false;
	return true;
}

int main()
{
	string pattern = "abba";
	string word = "dog cat cat dog dog dog dog";

	std::cout << wordPattern(pattern,word) << endl;
	return 0;
}