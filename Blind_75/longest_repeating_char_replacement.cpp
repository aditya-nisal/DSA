// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int characterReplacement(std::string s, int k) {
    std::unordered_map<char, int> countMap;
    int maxLength = 0;
    int maxCount = 0;
    int start = 0;

    for (int end = 0; end < s.length(); ++end) {
        maxCount = std::max(maxCount, ++countMap[s[end]]);
        
        if (end - start + 1 - maxCount > k) {
            --countMap[s[start]];
            ++start;
        }

        maxLength = std::max(maxLength, end - start + 1);
    }

    return maxLength;
}

};

int main() {
    Solution sol;
    int res = sol.characterReplacement("ABAB", 2);
    std::cout << res;

    return 0;
}