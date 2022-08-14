#include <iostream>
#include <fstream>


int main()
{
	
	std::string file1 =  "A1.2.txt";
	std::ifstream fin;
	fin.open(file1);
	std::string file2 = "1.2dest.txt";
	std::ofstream fout;
	
	fout.open(file2);
	
	if(!fout.is_open())
        {
                std::cout << "Error: file is not open." << std::endl;
        }
        else
        {
                
                std::cout << "File is open." << std::endl;
                

        }

	if(!fin.is_open())
	{
		std::cout << "Error: file is not open." << std::endl;
	}
	else
	{
		std::string line;
		std::cout << "File is open." << std::endl;
		
		while(fin >> line)
		{
			if(line[0] >='a' && line[0] <= 'z')
			{
				line[0] -= 32;
			
			}
			fout << line << " ";
		}

	}

	fin.close();
	fout.close();
return 0;
}


