#include <iostream>
void insertion(int *, int);
void print(int*, int);
int main()
{	int size;
	std::cin>> size;
	int* arr =  new int[size];
	for(int i = 0; i < size; ++i)
	{
		arr[i] = rand()%20;
	
	}
	print(arr, size);
	insertion(arr, size);
	print(arr, size);

}
void print(int * arr, int size)
{
	for(int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " " ;
	
	}
	std::cout << std::endl;

}
void insertion(int* arr, int size)
{
	int i; 
	int j;
	int key;
for(i = 1; i < size; ++i)
{
	j = i - 1;
	key = arr[i];
	while(j >= 0 && arr[j] > key)
	{
		arr[j + 1 ] = arr[j];
		j = j - 1;	
	}
		arr[j + 1] = key;
		
}
}
