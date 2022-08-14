#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::string file_name = "Names.txt";
	
	std::ifstream fin;
	fin.open(file_name);
	std::ofstream fout;
	std::string dest_name = "Changed_Names.txt";
	fout.open(dest_name);
	if(!fin.is_open())
	{
		std::cout << "Error" << std::endl;
	}
	else
	{
		std::string name;
	
	while(fin >> name)
	
	{
		for(int i = 0; i < name.size() ; ++i)
		{
			
			if(name[i] == name[1])
			{
				name[i] = name[1];
			}

			else if(name[i] == '"')
			{
				name[i] = '"';
			
			}
			else if(name[i] == ',')
			{
				name[i] = ',';
			}
			else
			{
				name[i] += 32;
			}
		
		}
	
		fout << name << " " ;
	
		}

	
	}
	
	fin.close();
	fout.close();
	
	return 0;
	}
