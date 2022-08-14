#include <iostream>
int main()
{
	unsigned fib1 = 0;
	unsigned fib2 = 1;
	unsigned fib = 0;
	unsigned sum = 0;



	for (int i = 0; i < 4000000; ++i)
{
	if(i == 1)
	{
	fib = 1;
	}
	if(i == 2)
	{
		fib = 2;
	}

	fib = fib1 + fib2;
	fib1 = fib2;
	fib2 = fib;

	if(fib % 2 == 0)
	{
		sum += fib;
	}

}
	std::cout << sum << std:: endl;
}
