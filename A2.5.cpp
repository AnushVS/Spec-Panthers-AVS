#include <iostream>
int count_odds(int, int);

int main()
{
	int num1;
	int num2;
	
	do
{	
	std::cout << "Please enter two numbers " << std::endl;

	std::cin >> num1;
	std::cin >> num2;
}
	while(num1 > num2);
	
	std::cout << count_odds(num1, num2) << std::endl;
	
}
	int count_odds(int num1, int num2)
{
	int count = 0;
	
	for(int i = num1; i <= num2; ++i)
	{
		if(!(i % 2 == 0))
		{
			++count;
		
		}
	
	}
	
	return count;

}
