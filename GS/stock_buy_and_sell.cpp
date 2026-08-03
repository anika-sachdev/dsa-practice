#include <iostream>
using namespace std;

void stock_buy_and_sell(int price[], int n)
{
    int profit=0;
    int min_price=price[0];
    int max_profit=0;
    for(int i=0;i<n;i++)
    {
        profit=price[i]-min_price;
        if(profit>max_profit)
        {
            max_profit=profit;
        }
        if (price[i]<min_price)
        {
            min_price=price[i];
        }
    }
    cout<<max_profit<<endl;
}
int main()
{
    int price[6]={7,1,5,3,6,4};
    stock_buy_and_sell(price,sizeof(price)/sizeof(price[0]));
}