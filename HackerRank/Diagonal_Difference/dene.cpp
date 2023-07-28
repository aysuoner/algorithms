#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
	long int leftsum = 0;
	long int rightsum = 0;
	int len = arr[0].size();
	for (int i = 0; i < len; i++)
	{
		leftsum  += arr[i][i];
		rightsum += arr[i][len - 1 - i];
    }
	return abs(leftsum - rightsum);
}

int main()
{
	vector<vector<int>> vector1
    {
        {1, 2, 11},
        {4, 11, 6},
        {11, 8, 9}
    };

    diagonalDifference(vector1);
    return 0;
}
