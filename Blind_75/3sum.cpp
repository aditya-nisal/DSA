#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int k = 0; k < nums.size(); ++k) {
            if (k > 0 && nums[k] == nums[k - 1]) continue;

            int i = k + 1;
            int j = nums.size() - 1;

            while (i < j) {
                int sum = nums[k] + nums[i] + nums[j];
                if (sum == 0) {
                    res.push_back({nums[k], nums[i], nums[j]});
                    while (i < j && nums[i] == nums[i + 1]) ++i;
                    while (i < j && nums[j] == nums[j - 1]) --j;
                    ++i; --j;
                } else if (sum < 0) {
                    ++i;
                } else {
                    --j;
                }
            }
        }
        return res;
    }
};

int main(){
    vector<int> tsum{-1,0,1,2,-1,-4};
    Solution S;
    vector<vector<int>> vec = S.threeSum(tsum);
    for (auto v: vec){
        std::cout<<"["<<v[0]<<", "<<v[1]<<", "<<v[2]<<"]"<<std::endl;
    }
}