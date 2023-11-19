#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int v;
        string res = "";
        for (char i: s){
            i = tolower(i);
            v = i;
            if ((v>=97 && v<=122) || isdigit(i)){
                res+=i;
            }
        }
        int j = res.size() - 1;
        for(int i=0; i<res.size(); i++){
            if(res[i]!=res[j]){
                return 0;
            }
            j--;
        }
        return 1;
    }
};

int main() {
    string s = "0P";
    Solution S;
    bool res = S.isPalindrome(s);
    std::cout<<res;
    return 0;
}