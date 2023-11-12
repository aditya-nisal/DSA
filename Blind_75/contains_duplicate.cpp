#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size()-1; i++){
            if (nums[i]==nums[i+1]){
                return true;
            }
            }
        
        return false;

    }
};

int main(){
    vector<int> g = {1, 2, 3, 4, 5};
    vector<int> p = {1, 2, 3, 1, 2};
    Solution S;
    std::cout<<S.containsDuplicate(g)<<std::endl;
    std::cout<<S.containsDuplicate(p)<<std::endl;
}