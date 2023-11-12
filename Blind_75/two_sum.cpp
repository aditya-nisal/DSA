#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> sum;
        for (int i=0; i<nums.size(); i++){
            sum[nums[i]] = i;
        }
        for (int i=0; i<nums.size(); i++){
            int rem = target - nums[i];
            if (sum.count(rem)>0 && sum[rem]!=i){
                return {i, sum[rem]};
            }
        }
        return {};
    }
};

int main(){
    vector<int> nos = {1, 2 ,5, 4, 7};
    int t = 9;
    Solution S;
    vector<int> result = S.twoSum(nos, t);
    for (auto a: result){
        std::cout<<a<<std::endl;
    }
    return 0;
}