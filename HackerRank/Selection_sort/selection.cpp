#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

 void selectionSort(vector<int>& arr, int size)
 {
	int min;
	for(int i = 0; i < size - 1; i++)
	{
		min = i;
		for(int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		if (min != i)
			swap(arr[i], arr[min]);
		for (int m : arr)
		{
			cout << m << " ";
		}
		cout << endl;
	}
 }

int main()
{
	vector<int> arr = {54, 17, 78, 43, 70, 32, 97, 16};
	//vector<int> arr1 =  {2,1,-11,4};
//	vector<int> arr2 =  {2,4,6,8,3};
	//int arr3 [] =  {-2, 1, -1, -4, 5, 3};
 	//int size = sizeof(arr1) / sizeof(arr1[0]);
 	selectionSort(arr, 8);
    return 0;
}