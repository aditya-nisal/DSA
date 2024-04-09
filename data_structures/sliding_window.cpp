#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class SlidingWindow{
public:
    SlidingWindow(){
        std::cout<<"Sliding Window Example start"<<std::endl;
    }
    ~SlidingWindow(){
        std::cout<<"Sliding Window Example end"<<std::endl;
    }

    int MaxProfit(vector<int>& prices);
    int LongestSubstring(string);
};

int SlidingWindow::MaxProfit(vector<int>& prices)
{
    /* In sliding window we have 3 variables:
    min - For holding the nmber saving it from looping
    profit_today - todays profit to compare with global profit
    profit - profit to keep running throughout*/
    int min=INT_MAX;
    int profit_today = 0;
    int profit = 0;

    for(int i=0; i<prices.size(); i++)
    {
        if(min>prices[i])
        {
            min = prices[i];
        }
        
        profit_today = prices[i] - min;

        if(profit_today>profit)
        {
            profit = profit_today;
        }

    }
    return profit;

}

int SlidingWindow::LongestSubstring(string s)
{
    int streak = 1;
    int max_streak = 1;
    for (int i=0; i<s.size(); i++)
    {
        if(streak>max_streak)
        {
            max_streak = streak;
        }
        if(s[i]==s[i+1])
        {
            streak = 0;
        }
        streak++;
    }
    return max_streak;

}

int main()
{
    SlidingWindow sw;
    vector<int> stock = {1, 5, 6, 4, 2, 8, 6, 5, 1, 3, 5, 1};
    std::cout<<"Maximum possible profit = "<<sw.MaxProfit(stock)<<std::endl;
    string s = "afngrnglnmmpmlmlopsmfmf";
    std::cout<<"Maximum streal = "<<sw.LongestSubstring(s)<<std::endl;
    return 0;

}