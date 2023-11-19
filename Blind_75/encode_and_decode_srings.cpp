#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:

    string encode(vector<string> &strs) {
        string words = "";
        for (auto str: strs){
            str+="$";
            words+=str;
        }
        return words;
    }

    vector<string> decode(string &str) {
        vector<string> res;
        string word = "";
        while(str.size()>0){
            for (int i=0; i<str.size(); i++){
                if(str[i]=='$'){
                    res.push_back(word);    
                    str.erase(0, i+1);
                    word.erase();
                    break;
                }
                else{
                    word+=str[i];
                }
                
            }
        }
        return res;
    }
};

int main(){
    vector<string> sent {"Hello", "Hows", "it", "goin?"};
    Solution S;
    string w = S.encode(sent);
    std::cout<<w<<std::endl;
    vector<string> get_res = S.decode(w);
    for(auto i: get_res){
        std::cout<<i<<" ";
    }
    return 0;
}