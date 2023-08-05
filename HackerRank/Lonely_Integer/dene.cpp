#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int lonelyinteger(std::vector<int>& arr)
{
    int uniqueElement = 0;
    for (int num : arr) {
        uniqueElement ^= num;
    }
    return uniqueElement;
}

int main()
{
	vector<int> vector1 = {1, 2, 3, 4, 3, 2, 1};

	int res = lonelyinteger(vector1);
	std::cout << res << std::endl;
    return 0;
}
