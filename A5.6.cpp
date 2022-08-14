#include <iostream>
#include <vector>

int sumOfUnique(std::vector<int>& nums);
int main()
{
	std::vector<int> nums = {1,2,3,2};
	
	std::cout << sumOfUnique(nums) << std::endl;



}

int sumOfUnique(std::vector<int>& nums) {
        int count;
        int sum = 0;
        
	for(int i = 0; i < nums.size(); ++i)
        {
            count = 0;
            for(int j = 0; j < nums.size(); ++j)
        {
            if(nums[i] == nums[j] )
            {
                ++count;
            }
            }
                if(count == 1)
            {
                sum += nums[i];

            }



        }
        return sum;
    }
