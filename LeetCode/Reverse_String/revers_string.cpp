class Solution
{
public:
void reverseString(vector<char>& s)
{
	int f = 0;
	int l = s.size() - 1;
	while (l > f)
	{
		swap(s[f], s[l]);
		f++;
		l--;
	}
}
};