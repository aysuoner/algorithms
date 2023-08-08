#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void selectionSort(int size,int *arr)
{   
	int i = 0;
	int curr = 0;
	int min;
	int min_i;
	int temp;
	while(curr < size)
	{
		min = arr[curr];
		min_i = curr;
		i = curr + 1;
		while(i < size)
		{
			if(min > arr[i])
			{
				min = arr[i];
				min_i = i;
			}
			i++;
		}
		if (min_i != curr)
		{
			temp = arr[curr];
			arr[curr] = arr[min_i];
			arr[min_i] = temp;
		}
		curr++;
	}
}


int main()
{
	//int arr [] = {54, 17, 78, 43, 70, 32, 97, 16, 94, 74, 18, 60, 61, 35, 83, 13, 56, 75, 52, 70, 24, 37, 17, 3, 0, 16, 12};
//	vector<int> arr1 =  {2,3,1,5,4};
//	vector<int> arr2 =  {2,4,6,8,3};
	int arr3 [] =  {-2, 1, -1, -4, 5, 3};
 	int size = sizeof(arr3) / sizeof(arr3[0]);
 	selectionSort(size, arr3);
	printArray(arr3, size);
    return 0;
}