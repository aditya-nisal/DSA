#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>

using namespace std;

class Search
{
    public:
    Search(){std::cout<< "Binary search Started"<<std::endl;}
    ~Search(){std::cout<< "Binary search Ended"<<std::endl;}
    int BinarySearch(std::vector<int>& nums, int x);
};

int Search::BinarySearch(std::vector<int>& nums, int x)
{
    int size = nums.size();
    int low = 0;
    int high = nums.size()-1;
    
    while (low<=high)
    {
    int mid = (low + high)/2;
        if(x==nums[mid]) return mid;
        else if (x<nums[mid]) high = mid;
        else if (x>nums[mid]) low = mid;
    }
    return -1;
}

int main()
{
    std::vector<int> nums = {1, 3, 4, 5, 5, 7, 8};
    // std::sort(nums.begin(), nums.end());
    int x = 5;
    Search S;
    std::cout<<S.BinarySearch(nums, x)<<std::endl;
}
