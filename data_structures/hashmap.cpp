#include<iostream>
#include <vector>
#include <unordered_map>

class HashMap{

public:
    HashMap(){
        std::cout<<"Hashmap problem start"<<std::endl;
    }
    ~HashMap(){
        std::cout<<"Hashmap problem end"<<std::endl;
    }

    std::vector<int> TwoSum(std::vector<int> & nums, int target);
    bool ValidAnagram(std::string, std::string);

};

    std::vector<int> HashMap::TwoSum(std::vector<int> & nums, int target)
    {
        std::unordered_map<int, int> sums;

        for (int i =0; i<nums.size(); i++)
        {
            sums[nums[i]] = i;
        }

        for (int j=0; j<nums.size(); j++)
        {
            int rem = target-nums[j];
            if(sums.count(rem)>0 && nums[j]!=j)
            {
                return {j, sums[rem]};
            }
        }
        return {};
    }

    bool HashMap::ValidAnagram(std::string s, std::string t)
    {
        std::unordered_map<char, int> anagram;
        for (auto c: s)
        {
            anagram[c]++;
        }

        for(auto c: t)
        {
            anagram[c]--;
        }
        for(auto c: anagram)
        {
            if(c.second !=0)
            {
                return false;
            }
        }
        return true;
    }


int main()
{
    HashMap H;
    std::vector<int> arr = {1, 2, 5, 4, 9, 8, 2};
    int target = 10;
    for (auto i: H.TwoSum(arr, target)){
        std::cout<<i<<std::endl;
    }
    std::string s = "anagram";
    std::string t = "nagaram";
    std::cout<<H.ValidAnagram(s, t)<<std::endl;
    return 0;
}
