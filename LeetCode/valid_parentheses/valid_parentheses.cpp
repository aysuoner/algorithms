class Solution {
public:
bool isValid(string s)
{
	stack<char> a; // acma
	if (s.length() % 2)
		return false;
	for(int i = 0; i < s.length(); i++)
	{
		if (s[i] == 40 || s[i] == 91 || s[i] == 123) //acma ise
			a.push(s[i]);
		else if (a.size() > 0)
		{
			if (s[i] - a.top() == 2 || s[i] - a.top() == 1)
				a.pop();
			else
				return false;
		}
        else
            return false;
	}
	if (a.size() > 0)
		return false;
	return true;
}
};