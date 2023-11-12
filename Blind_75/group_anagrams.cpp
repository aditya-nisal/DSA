#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, vector<string>> mp;
        
        for (auto x : strs){
            string str = x;
            std::sort(str.begin(), str.end());
            mp[str].push_back(x);
        }

        vector<vector<string>> ret;
        for (auto& m:mp){
            ret.push_back(m.second);
        }
        return ret;
    }
};

int main(){
    vector<string> sts = {"eat","tea","tan","ate","nat","bat"};
    Solution S;
    vector<vector<string>> val = S.groupAnagrams(sts);
    std::cout<<val[0][0];
    return 0;
}