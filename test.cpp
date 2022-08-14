#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::string name = "text.txt"; 
	std::ifstream fin;
	
	fin.open(name);

	if(!fin.is_open())
	{
		std::cout << "Error: File is not open"<< std::endl;
	
	}
	else
	{
		std::cout << "file is open" << std::endl;
		
		std::string str;
		std::string str1;
		std::string str2;
		int count = 0;
		
		while(!fin.eof())
		{	
			str = "";
			getline(fin, str);
			fin >> str;
		
			{
				++count;
			}
		
			std::cout << count;		
			
		}
	}

return 0;
}
