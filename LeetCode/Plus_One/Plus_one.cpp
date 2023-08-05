class Solution {
public:

vector<int> plusOne(vector<int>& digits)
{
    int last_indx=digits.size() - 1;
    for(int i=last_indx; i>=0; i--)
    {
        if(digits[i]<9)
		{
			digits[i]++;
			return digits;
		} 
        else
            digits[i]=0;
    }
    vector<int>newnumber(last_indx + 2,0);
    newnumber[0]=1;
    return newnumber;
}
};