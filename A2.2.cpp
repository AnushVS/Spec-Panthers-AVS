#include <iostream>
int main()
{
	const int size = 5;
	int arr[size] = {1,5,4,8,3};
	int arr1[size];
	
	for(int i = 0; i < size; i++)
	{
		arr1[i] = arr[i]*arr[i];
	}

		for(int i = 0; i < size; ++i)
	{
		for(int j = 0; j < size; ++j)
	{
	
		if(arr1[i] > arr1[j] )
		{
			int tmp = arr1[i];
			arr1[i] = arr1[j];
			arr1[j] = tmp;
		}
	}

	}
	for(int i = 0; i < size; ++i)
	{
		std::cout << arr1[i] << " ";

	}
	std::cout << std::endl;
	return 0;	
}
