#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
using namespace std;

string Result(string s)
{
    int N = sqrt(s.size());
    cout<<"N="<<N<<endl;

    // Rows
    for(int i = 0; i<s.size(); i+=N) {
    int count = 1;
    string result;
        for (int j=i+1; j<i+N; j++)
        {
            if(s[j] == s[j-1])++count;
            result = s[j];
        }
        if (count==N)
        {
        cout<<"By row rule "<<result<<" wins"<<endl;
        return result; 
        }
    }

        // Column
    for(int i = 0; i<N; i++) {
    int count = 1;
    string result;
        for (int j=i+N; j<s.size(); j+=N)
        {
            if(s[j] == s[j-N])++count;
            result = s[j];
        }
        if (count==N)
        {
        cout<<"By column rule "<<result<<" wins"<<endl;
        return result; 
        }
        }

    // First diagonal
    int count = 1;
    string result;
    for(int i =N+1; i<s.size(); i+=N+1)
    {
        if (s[i] == s[i - N-1]) {count++;}
        result = s[i];
    }
    if (count==N) 
    {
        cout<<"By diagonal rule "<<result<<" wins"<<endl;        
        return result;}

    // Inverse diagonal
    int count_ = 1;
    string result_;
    for(int i =N+N-2; i<s.size()-N+1; i+=N-1)
    {
        if (s[i] == s[i - N+1]) {
            count_++;}
        result_ = s[i];
    }
    if (count_==N) 
    {
        cout<<"By reverse diagonal rule "<<result_<<" wins"<<endl;
        return result_;}


    return "draw";

}

int main()
{
    string s;
    cin>>s;
    cout<<Result(s);
    return 0;
}