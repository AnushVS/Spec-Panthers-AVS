#include <iostream>
#include <string>

int main()
{
	std::string line = "Hello";

	getline(std::cin, line);
	int line_size = line.size();
	
	for(int i = 2; i < line_size; i = i+2)
	{
		line.erase(i, 1);
	
	}	
	
		
	std::cout << line;
	

	return 0;
}
