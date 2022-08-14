#include <iostream>
#include <fstream>
#include <string>

int main()
{
	int number = 0;
	int count = 0;
	std::string name = "A1.1.txt";
	std::ifstream fin;
	
	fin.open(name);
	
  	if(!fin.is_open())
  {
  	std::cout << "Error: file is not open." << std::endl;
  
  }	  
  	else
  {
  	std::cout <<"file is open" << std::endl;
	  	
	while(fin >> count)
	{
		number += count;

	}	
  } 
  	std::cout <<"The sum of numbers is " << number << std::endl;
  
	fin.close();
	
	return 0;
}

