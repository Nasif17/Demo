#include<iostream>
using namespace std;

int main()
{
    int arr[14]={1,2,3,4,5,6,7,8,1,2,10,40,40,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=0;

    cout<<"Original array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<size;i++)
    {
        bool duplicate=false;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                duplicate=true;
                break;
            }
        }

        if(!duplicate)
        {
            arr[key++]=arr[i];

        }
    }

    cout<<endl<<"After removing duplicated elements"<<endl;

    for(int i=0;i<key;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
