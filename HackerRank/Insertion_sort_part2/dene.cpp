#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void insertionSort2(int n, vector<int> arr)
{
    int prev = 1, count = 1;
	int curr;
    while (n > 1)
    {
        prev = count - 1;
		curr = count;
        while (prev >= 0)
        {
            if (arr[curr] < arr[prev])
            {
                swap(arr[curr], arr[prev]);
				curr = prev;
            }
            prev--;
        }
        count++;
        n--;
        for (int m: arr)
        {
            std::cout << m << " " ;
        }
        cout << endl;
    }
}

int main()
{
	vector<int> arr = {54, 17, 78, 43, 70, 32, 97, 16, 94, 74, 18, 60, 61, 35, 83, 13, 56, 75, 52, 70, 24, 37, 17, 3, 0, 16, 12};
//	vector<int> arr1 =  {2,3,1,5,4};
//	vector<int> arr2 =  {2,4,6,8,3};
	vector<int> arr3 =  {8,7 ,6 ,5 ,4 ,3, 2, 1};
 	 insertionSort2(8, arr3);

    return 0;
}