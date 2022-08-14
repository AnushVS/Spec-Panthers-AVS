#include <iostream>

int main()
{
	int num;
	std::cout << "Please enter the number: " << std::endl;
	std::cin >> num;
	
	if(num < 0)
	{
		num = 0 - num;
	}
	
	int sum = 0;
	
	while(num != 0)
	{
		sum +=num%10;
		num /=10;
	}

	std::cout << "The sum of numbers is: " << sum << std::endl;
	return 0;
}
