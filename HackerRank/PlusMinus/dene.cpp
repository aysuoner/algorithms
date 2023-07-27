#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void plusMinus(vector<int> arr)
{ 
	float zero = 0;
	float pos = 0;
	float neg = 0;
	for (int i = 0; arr.size() > i; i++)
	{
		if (arr[i] > 0)
			pos++;
		else if (arr[i] < 0)
			neg++;
		else
			zero++;
	}
	cout << setprecision(6) << fixed;
    std::cout << pos / arr.size() << std::endl;
    std::cout << neg / arr.size() << std::endl;
    std::cout << zero / arr.size() << std::endl;
}

int main()
{

	vector<int> vector1 = {1, 1, 0, -1, -1};

    plusMinus(vector1);
    return 0;
}
