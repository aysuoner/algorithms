class Solution {
public:
bool isSubsequence(string search, string source)
{
	if (search == source)
		return true;
	int k = 0; //search indx
	int i = 0; //source indx
	int len = source.length();
	while (i < len) //TC  worst scenerio ==> O(source.length) TC best_scenerio O(search.length())
	{
		if (search[k] == source[i])
			k++;
		i++;
		if (k == search.length())
			return true;
	}
	return false;
}//SC O(1);
};