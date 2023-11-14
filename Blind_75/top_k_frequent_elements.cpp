#include<iostream>
#include <unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    std::unordered_map<int, int> freq;

    for (auto i: nums){
        (freq[i])++;
    }

    vector<vector<int>> bucket(nums.size() + 1);
    for (auto& j: freq){
        bucket[j.second].push_back(j.first);
    }

    vector<int> k_top;
    for(int i=bucket.size()-1; i>0 && k_top.size()<k; --i){
        for(int j=0; j<bucket[i].size() && k_top.size()<k; ++j){
            k_top.push_back(bucket[i][j]);
        }
    }
    return k_top;

    }
};
int main() {
    Solution S;
    vector<int> ints {1,1,1,2,5,5,5,5,5,6,6};
    vector<int> vect = S.topKFrequent(ints, 2);
    for (auto i:vect){
        std::cout<<i<<std::endl;
    }

    return 0;
}