#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> buildArray(std::vector<int>& target, int n);

int main()
{	std::vector <int> target = {1,3};
	int n = 3;
	std::vector <std::string> new_target = buildArray(target, n);
       for(int i = 0; i < new_target.size(); ++i)
       {
       	std::cout << new_target[i] <<" ";
       }	       
       std::cout << std::endl;
       return 0;

}

std::vector<std::string> buildArray(std::vector<int>& target, int n) {
        
	int i = 0;
        int j = 1;
        
	std::vector<std::string> viki;
        
	do
        {
                if(target[i] == j)
                {
                    viki.push_back("Push");
                    ++j;

                }
        	 else
            	
		 {
                	viki.push_back("Push");
                	viki.push_back("Pop");
                	++j;
                	--i;
            	}
            	++i;

        }
        
	while(i < target.size() && j <= n);

        return viki;
    }

