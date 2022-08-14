#include <iostream>
int main()
{
	unsigned fib1 = 0;
	unsigned fib2 = 1;
	unsigned fib = 0;
	unsigned sum = 0;
	unsigned ind = 4000000;

	for(int i = 0; i < ind; ++i)
	{
		if(i == 1)
		{
			fib1 = 1;
		}
		if(i == 2)
		{
			fib2 = 2;		
		}

		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;

		if(fib % 2 == 0)
		{
			sum += fib;		
		}
		
	}
		std::cout <<"the sum is : " sum << std::endl;
		
	

}
