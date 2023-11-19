#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;

class Solution{
  public:
    int longestConsecutive(vector<int>& nums){
        if (nums.size() == 0){
            return 0;
        }
        std::unordered_set<int> con;
        int longest_streak = 0;
        for (auto n: nums){
            con.insert(n);
        }
        // std::cout<<
        for (auto num: nums){
            if(con.find(num-1) == con.end()){
                int curr_num = num;
                int current_streak = 1;
                while(con.find(curr_num+1) != con.end()){
                    curr_num++;
                    current_streak++;
                }
                longest_streak = std::max(longest_streak, current_streak);
            }
        }
        return longest_streak;
    }
};



int main() {
    vector<int> nums {1, 5, 8, 2, 3, 4, 9, 10};
    Solution S;
    int seq = S.longestConsecutive(nums);
    std::cout<<seq;
    return 0;
}