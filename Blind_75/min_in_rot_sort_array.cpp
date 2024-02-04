#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        
        while(start<end){
            int mid=start+(end-start)/2;
            if(nums[mid]>nums[end]) start = mid+1;
            else end = mid;
        }

        return nums[start];
    }
};

int main() {
    std::vector<int> nums_1 = {11, 13, 15, 17};
    std::vector<int> nums_2 = {4, 5, 1, 2, 3};
    Solution sol;
    std::cout<<sol.findMin(nums_1)<<std::endl;
    std::cout<<sol.findMin(nums_2)<<std::endl;

    return 0;
}