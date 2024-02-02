// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> bracket;
        for (auto c: s){
            if((c=='(')||(c=='[')||(c=='{')){
                bracket.push(c);
            }
            else if((c==')')||(c==']')||(c=='}')){
                if(bracket.empty()) return false;
                char top = bracket.top();
                bracket.pop();
                if(((c==')')&&(top!='('))||((c==']')&&(top!='['))||((c=='}')&&(top!='{'))){
                    return false;
            }

            }
        }
        return bracket.empty();
    }
};

int main() {
    std::string s = "([{}])";
    Solution sol;
    bool res = sol.isValid(s);
    std::cout<<res;

    return 0;
}