#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void miniMaxSum(vector<int> arr)
{
	int min = arr[0];
	int max = arr[0];
	long int sum = arr[0];
	for (int i = 1; i < arr.size(); i++)
	{
		if (min > arr[i])
			min = arr[i];
		else if (max < arr[i])
			max = arr[i];
		sum += arr[i];
	}
	std:: cout << sum - max << " " << sum - min << std::endl; 
}

int main()
{
	vector<int> vector1 = {256741038, 623958417, 467905213, 714532089, 938071625};

    miniMaxSum(vector1);
    return 0;
}
