#include <iostream>
using namespace std;
int main()
{
    int k;

    int arr[10] ={0,1,2,3,4,5,6,7,8,9};

    cout<<"enter the index number you want to remove : ";
    cin>>k;

    for(int i=0;i<10;i++)
    {
        if(i==k)
        {
            for(i=k;i<10;i++)
            {
            arr[i]=arr[i+1];
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }

} 