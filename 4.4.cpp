#include <iostream>
#include <cmath>
#include <cstdlib>
int main()
{
	int sum = 0;
	int qar_sum = 0;
	for(int i = 1; i <= 100; ++i)
	{
		sum += i;
		qar_sum += i*i;
	}

	sum *= sum;

	std::cout << std::abs(qar_sum - sum) << std::endl;
}
