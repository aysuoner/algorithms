#include <vector>
#include <iostream>

using namespace std; 

void bubbleSort(vector<int>& arr, int size)
{
	int count = 1;
	int i;
	bool sorted;
	while (count < size)
	{
		i = 0;
		sorted = true;
		while(i < size - count)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				sorted = false;
			}
			i++;
		}
 		if (sorted )
			break;
		count++;
		for (int m : arr)
			cout << m << " ";
		cout << endl;
	}
}

int main()
{
	vector<int> arr = {1, 2, 4, 7, 32, 33, 97, 16};
	//vector<int> arr1 =  {2,1,-11,4};
//	vector<int> arr2 =  {2,4,6,8,3};
	//int arr3 [] =  {-2, 1, -1, -4, 5, 3};
 	//int size = sizeof(arr1) / sizeof(arr1[0]);
 	bubbleSort(arr, 8);
    return 0;
}