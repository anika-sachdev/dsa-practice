#include <iostream>
#include <unordered_map>
using namespace std;
void two_sum(int arr[],int n,int target)
{
    unordered_map<int,int> two_sum;
    int found=0;
    for(int i=0;i<n;i++)
    {
        int find_value=target-arr[i];
        if(two_sum.find(find_value)!=two_sum.end())
        {
            two_sum[arr[i]]=find_value;
            found=1;
            break;
        }
        else
        {
            two_sum[arr[i]]=0;
        }
    }
    if(found==0)
    {
        cout<<-1<<endl;
    }
    else
    {
    for(auto p:two_sum)
    {
        if((p.first)+(p.second)==target)
        {
        cout<<"The pair that gives the target result is: "<<p.first<<" "<<p.second<<endl;
        }
    }
}
}
int main()
{
    int arr[4]={2,7,11,15};
    two_sum(arr,4,9);
}