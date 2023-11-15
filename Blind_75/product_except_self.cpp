#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int> left_prod(nums.size());
        left_prod[0] = 1;
        for (int i=1; i<nums.size(); i++){
            left_prod[i] = left_prod[i-1] * nums[i-1];        
        }

        vector<int> right_prod(nums.size());
        right_prod[nums.size()-1] = 1;
        for (int i=nums.size() - 1; i>0; i--){
            right_prod[i-1] = right_prod[i] * nums[i];        
        }

        vector<int> res (nums.size());
        for (int i=0; i<nums.size(); i++){
            res[i] = left_prod[i] * right_prod[i];
        }
        return res;
    }
};

int main(){
    Solution S;
    vector<int> v1 {1, 2, 5, 0, 4};
    vector<int> v2 {1, 2, 3, 4};
    vector<int> v1_prod = S.productExceptSelf(v1);
    vector<int>  v2_prod = S.productExceptSelf(v2);
    for (auto i: v1_prod){
        std::cout<<i<<" ";
    }
    std::cout<<""<<std::endl;
    for (auto j: v2_prod){
        std::cout<<j<<" ";
    }
    
    return 0;
}