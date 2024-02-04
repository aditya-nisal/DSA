// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;

        while(start<=end)
        {
            int mid = (start+end)/2;
            if(nums[mid] == target)
            {
                return mid;
            }

            if(nums[start]<=nums[mid])
            {
                if((nums[start]<=target) && nums[mid]> target)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            {
                if((nums[end]>=target) && nums[mid] < target)
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target_1 = 0;
    int target_2 = 3;
    Solution sol;
    std::cout<<sol.search(nums, target_1)<<std::endl;
    std::cout<<sol.search(nums, target_2)<<std::endl;

    return 0;
}