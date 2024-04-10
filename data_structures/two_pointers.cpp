#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

class TwoPointer
{
public:
    TwoPointer()
    {
        std::cout<<"Start two pointer example"<<std::endl;
    }

    ~TwoPointer()
    {
        std::cout<<"End two pointer example"<<std::endl;
    }

    bool IsPalindrome(std::string);
    std::vector<std::vector<int>> ThreeSum(std::vector<int>);
    int MaxArea(std::vector<int>);
};

bool TwoPointer::IsPalindrome(std::string s)
{
    int v;
    std::string final_string;
    for (auto c: s)
    {
        c = std::tolower(c);
        v = c;

        if ((v>=97 && v<=122) || std::isdigit(c))
        {
            final_string+=c;
        }
    }
    int p = final_string.size() - 1;
    for (int i=0; i<final_string.size(); i++)
{
        if(final_string[i]!=final_string[p])
        {
            return 0;
        }
        --p;
}
    return 1;
}

std::vector<std::vector<int>> TwoPointer :: ThreeSum(std::vector<int> nums)
{
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());
    for(int k=0; k<nums.size(); ++k)
    {
        if(k>0 && nums[k-1]==nums[k]) continue;
        int i = k+1;
        int j=nums.size()-1;

        while(i<j)
        {
            int sum = nums[i]+nums[j]+nums[k];
            if( sum==0 )
            {
                result.push_back({nums[i],nums[j],nums[k]});
                while(i<j && nums[i]==nums[i+1]) ++i;
                while(i<j && nums[j]==nums[j-1]) --j;
                ++i;
                --j;
            }
            else if(sum<0) {++i;}
            else {--j;}
        }
    }
    return result;
}

int TwoPointer::MaxArea(std::vector<int> height)
{
    int area = 0;
    int max_area = 0;
    int i = 0;
    int j = height.size() - 1;

    while(i<j){
        if(height[i]>height[j]){
            area = height[j] * (j-i);
            --j;
        }
        else if(height[i]<height[j]){
            area = height[i] * (j-i);
            ++i;
        }
        else{
            ++i;
            ++j;
        }
        if(max_area < area)
        {
            max_area = area;
        }
    }
    return max_area;
}

int main()
{
    TwoPointer tp;
    std::string s = "abcdefggfedcba";
    std::vector<int> nums {-1,0,1,2,-1,-4};
    std::vector<int> height {1,0,1,2,1,4};
    std::vector<std::vector<int>> vec = tp.ThreeSum(nums);
    std::cout<<tp.IsPalindrome(s)<<std::endl;
    for (auto v: vec){
        std::cout<<"["<<v[0]<<", "<<v[1]<<", "<<v[2]<<"]"<<std::endl;
    } 
    std::cout<<"Maximum area = "<<tp.MaxArea(height)<<std::endl;
}