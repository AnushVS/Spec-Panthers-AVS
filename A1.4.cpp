#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream fin;
	int count = 0;
	std::string fileName = "A1.4.txt";

	fin.open(fileName);

	if(!fin.is_open())
	{
		std::cout << "Error: file is not open." << std::endl;
	}
	else
	{
		char line;
		
		std::cout << "File is open." << std::endl;
		while(fin.get(line))
		{
			++count;
	
		}		
	
	std::cout << "The number of letters is " << count - 1 << std::endl;
	}
	
	fin.close();
	return 0;
}
