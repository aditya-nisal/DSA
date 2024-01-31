#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int profit_today = 0;
        int profit = 0;
        for(int i=0; i<prices.size(); i++)
        {
            if(min>prices[i])
            {
                min=prices[i];
            }
            profit_today = prices[i] - min;
            if(profit_today>profit)
            {
                profit = profit_today;
            }
        }
        return profit;
    }
};

int main() {
    vector<int> stock_record_1 {7, 1, 5, 3, 6, 4};
    vector<int> stock_record_2 {7, 6, 4, 3, 1};
    Solution S;
    std::cout<<"Max Profit for first stock is: "<<S.maxProfit(stock_record_1)<<std::endl;
    std::cout<<"Max Profit for second stock is: "<<S.maxProfit(stock_record_2)<<std::endl;
    return 0;
}