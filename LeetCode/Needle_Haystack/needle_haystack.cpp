class Solution {
public:
int	strStr(string haystack, string needle)
{
	int first;
	int k;
	for (int i = 0; i < haystack.length(); i++)
	{
		first = -1;
		k = 0;
		while (k < needle.length() &&  i < haystack.length() && needle[k] == haystack[i])
		{
			if (first == -1)
				first = i;
			k++;
			i++;
		}
		if (k == needle.length())
			return first;
		else if (k > 0 && k != needle.length())
			i = i - k;
	}
	return -1;
}
};