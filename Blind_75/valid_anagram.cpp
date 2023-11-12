#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> count;

        for ( auto x: s){
            count[x]++;
        }

        for ( auto x: t){
            count[x]--;
        }

        for (const auto& c : count) {
            if (c.second != 0){
                return false;
            }
        }
        return true;
    }
};

int main(){
    string a = "hello";
    string b = "elhol";
    Solution S;
    std::cout<<(S.isAnagram(a, b))<<std::endl;
    return 0;
    
}