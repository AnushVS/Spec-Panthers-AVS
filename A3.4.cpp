#include <iostream>

int main()
{
	unsigned sum = 0;
	unsigned square_sum = 0;

	for(int i = 1; i < 100; ++i)
	{
		sum += i;
		square_sum += i*i;
	
	}
		sum*= sum;
	
	
	std::cout << "The difference is: " << sum - square_sum << std::endl;
return 0;
}
