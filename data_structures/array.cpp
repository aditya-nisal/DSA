#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution{
public:
    // Solution(){
    //     std::cout<<"Contins Duplicate Example"<<std::endl;
    // }
    bool ContainsDuplicate(vector<int>& nums){
        std::sort(nums.begin(), nums.end());
        for(int i =0; i<nums.size()-1; i++)
        {
            if (nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};

int main()
{
    vector<int> tubs = {1, 2, 3, 4, 5, 5, 6};
    Solution s;
    std::cout<<s.ContainsDuplicate(tubs);

}
