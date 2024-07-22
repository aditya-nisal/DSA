#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    std::string s = "111,5\n111,5\n222,3\n333,6\n333,6\n";
    std::vector<std::string> s_new;
    int i = 0;
    std::string s_;
    while (true && i<s.size())
    {
        if(s[i] == '\n')
        {
            s_new.push_back(s_);
            s_ = "";
            ++i;
            continue;
        }
        s_+=s[i];
        ++i;
    }
    // for (int k=0; k<s_new.size(); ++k)
    // {
    //     std::cout<<s_new[k];
    // }
    std::cout<<s_new[0]<<std::endl;
    std::unordered_map<std::string, int> s_map;
    // std::cout<<s_new[0][2];
    for (int b=0; b<s_new.size(); ++b)
    {
    s_ = "";
    // std::cout<<"In first for"<<std::endl;
        for(int q=0; q<(s_new[0]).size(); ++q)
        {
            if(s_new[b][q] == ',')
            {
                // std::cout<<"Found comma"<<std::endl;
                s_map[s_] += int(s_new[b][q+1])-48;
                // std::cout<<s_map[s_]<<std::endl;
            }
            s_+=s_new[b][q];
        }
    }

    for (auto j: s_map)
    {
        std::cout<<j.first<<": "<<j.second<<std::endl;
    }
    return 0;
}