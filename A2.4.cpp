#include <iostream>

int main()
{
	int num;
	std::cout << "Please enter the number: " << std::endl;
	std::cin >> num;
	
	if(num < 0)
	{
		num = 0-num;
	}
	
	int sum = 0;
	int mul = 1;

	while(num != 0)
	{
		sum += num%10;
		mul *= num%10;
		num /= 10;
	}

	std::cout << "The difference between numbers is : " << mul - sum << std::endl;

}
