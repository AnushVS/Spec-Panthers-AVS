#include <iostream>
#include <vector>

std::vector<int> searchRange(std::vector<int>& nums, int target);

int main()
{
	std::vector<int> nums = {5,7,7,8,8,10};
	int target = 8;

std::vector<int> ind_vec =  searchRange(nums,target);
	for(int i = 0; i < ind_vec.size(); ++i)
	{
		std::cout << ind_vec[i] << " " ;
	}
	std::cout << std::endl;

}
std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int count = 0;
        int index1 = 0;
        int index2 = 0;
	std::vector<int> vika;
        for(int i = 0; i < nums.size(); ++i)
        {
         if(nums[i] == target)
        {
            count++;
        index2 = i;
         }
        }
            index1 = index2 - count + 1;
            if(count >= 1)
            {
                vika = {index1, index2};
            }
       if(count < 1)
        {
            vika = {-1,-1};   
        }
        
    return vika;
    }

