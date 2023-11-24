#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int area;
        int i = 0;
        int j = height.size() - 1;
        while(i<j){
            if (height[i]<height[j]){
            area = (j-i)*height[i];
            i++;
            }
            else if (height[i]>height[j]){
                area = (j - i)* height[j];
            j--;
            }
            else{
                area = (j-i)*(height[i]);
                i++;
                j--;
            }
            if (area>max_area)
            {
                max_area = area;
            }

        }
        return max_area;
    }
};

int main(){
    vector<int> container {1,8,6,2,5,4,8,3,7};
    Solution S;
    int max_area = S.maxArea(container);
    std::cout<<"maximum area: "<<max_area;
    return 0;
}