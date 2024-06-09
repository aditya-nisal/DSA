#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Sort
{
    public:
    
    std::vector<int> BubbleSort(std::vector<int>& nums);

};

std::vector<int> Sort::BubbleSort(std::vector<int>& nums)
{
    bool swapped;
    for(int i=0; i<nums.size()-1; ++i)
    {
        swapped = false;
        for(int j=0; j<nums.size()-1-i; ++j)
        {
            if (nums[j]>nums[j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                swapped = true;
            }
            
        }
            if (swapped ==false) return nums;
    }
    return nums;
}

int main()
{
    std::vector<int> nums {1, 2, 8, 3, 5, 4};
    Sort S;
    std::cout<<S.BubbleSort(nums)[2];
}
