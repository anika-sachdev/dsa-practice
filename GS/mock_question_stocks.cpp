#include <iostream>
using namespace std;

int stocks(int prices[],int n)
{
    int profit=0;
    int min_price=prices[0];
    int bought=0;
    for(int i=1;i<n;i++)
    {
        if(prices[i]>prices[i-1])
        {
            profit+=(prices[i]-prices[i-1]);
        }
    }
    return profit;
}
int main()
{
    int prices[5]={1,2,3,4,5};
    cout<<stocks(prices,5);
}