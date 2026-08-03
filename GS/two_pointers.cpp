#include <iostream>
#include <unordered_map>
using namespace std;

void two_pointers(int arr[],int n,int target)
{
    int left_ptr=0;
    int right_ptr=n-1;
    while(left<right)
    {
        int sum=arr[left_ptr]+arr[right_ptr];
        if(sum==target)
        {
            cout<<arr[left_ptr]<<" "<<arr[right_ptr]<<endl;
            break;        
        }
        else if(sum<target)
        {
            left_ptr++;
        }
        else if(sum>target)
        {
            right_ptr--;
        }
    } 
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    two_pointers(arr,6,6);
}