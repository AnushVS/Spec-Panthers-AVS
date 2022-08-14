#include <iostream>
void print_arr(int*, int);
void selection(int *, int);
int main()
{
	int size;
	std::cin >> size;
	int* arr = new int [size];
	for(int i = 0; i < size; ++i)
	{
		arr[i] = rand()%20;
	
	}
	print_arr(arr, size);
	selection(arr, size);
	print_arr(arr, size);

}
void print_arr(int * arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " " ;
	
	}
	std::cout << std::endl;
}
void selection(int* arr, int size)
{
	int i = 0;
	int min_ind = 0;
	int j = 0;
	
     for(i = 0; i < size - 1; ++i)
      {
	min_ind = i;
	int tmp = arr[i];
	for(int j = i+1; j < size; ++j)
	{
      	if( arr[j] < arr[min_ind])
	{
		min_ind = j;
		
	}
	}
		arr[i] = arr[min_ind];
		arr[min_ind] = tmp;
	
	   	
}
}




































