class Solution {
public:

bool isAnagram(string s, string t)
{
	int count_s [26] {0};
	int i;
	if (s.length() != t.length())
		return false;
	for (i = 0; i < s.length(); i++)
	{
		count_s[s[i] - 'a']++;
		count_s[t[i] - 'a']--;
	}
	for (i = 0; i < 26; i++)
	{
		if (count_s[i] != 0)
			return false;
	}
	return true;
}
};