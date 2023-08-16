#include <iostream>
#include <string>

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution
{
public:
	int	firstBadVersion(int n)
	{
		unsigned int lo = 1;
		unsigned int hi = n;
		unsigned int mid;
		while (lo <= hi)
		{
			mid = lo + (hi - lo) / 2;
			if (isBadVersion(mid))
			{
				hi = mid;
			}
			else
			{
				lo = mid + 1;
			}
			if (lo == hi)
			{
				return lo;
			}
		}
		return lo;
	}
};