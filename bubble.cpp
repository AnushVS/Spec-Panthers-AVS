#include <iostream>
int* create_arr(int);
void value_arr(int*, int);
void bubble_sort(int*, int);
void print(int*, int);
void delete_arr(int*);
int main()
{
	int size; 
	std::cin >> size;
	int* parr = create_arr(size);
	value_arr(parr, size);
	print(parr, size);
	bubble_sort(parr, size);
	print(parr, size);
	delete_arr(parr);
	
}
int* create_arr(int size)
{
	int* arr = new int[size];
	
       return arr;	
}
void value_arr(int* arr, int size)
{
	for(int i = 0; i < size; ++i)
	{
	arr[i] = rand() % 20;
	}
}
void print(int* arr, int size)
{
for(int i = 0; i < size; ++i)
	{
	std::cout << arr[i] << " "; 
	}
	std::cout << std::endl;
}
void bubble_sort(int* arr, int size)
{
	for(int i = 0; i < size; ++i)
	{
		for(int j = i + 1 ; j < size; ++j)
		{
			if(arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			
			}
		
		}
	
	}

}
void delete_arr(int * arr)
{
	delete[]arr;
}
