#include <iostream>
#include<algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> charSet;
        int p_1 = 0;
        int max_length = 0;
        for(int p_2=0; p_2<s.length(); p_2++){
            if(charSet.count(s[p_2]) == 0){
                charSet.insert(s[p_2]);
                max_length = max(max_length, p_2-p_1+1);
            }
            else{
                while(charSet.count(s[p_2])){
                    charSet.erase(s[p_1]);
                    p_1++;}
                charSet.insert(s[p_2]);
            }
        }
        return max_length;
    }
};

int main() {
    std::string s = "abcabcbb";
    Solution sol;
    int result = sol.lengthOfLongestSubstring(s);
    std::cout<<result;

    return 0;
}