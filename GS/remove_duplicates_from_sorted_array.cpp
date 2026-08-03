#include <iostream>
using namespace std;
void duplicates(int arr[],int n)
{
    int position=1;
    int current=1;
    while(current<n)
    {
        if(arr[current]==arr[current-1])
        {
            current++;
        }
        else
        {
            arr[position]=arr[current];
            position++;
            current++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int arr[6]={1,1,1,2,2,3};
    duplicates(arr,6);
}