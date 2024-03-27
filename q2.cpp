#include<iostream>
using namespace std;

int main()
{
    int arr1[6]={1,4,6,3,6,9};
    int arr2[6]={5,3,7,1,2,6};
    int arr3[5],flag=0;

    for(int i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++)
    {
        for(int j=0;j<(sizeof(arr2)/sizeof(arr2[0]));j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[i]=arr1[i];
                flag++;
            }


        }
    }

    if(flag==0)
    {
        cout<<"no common elements";
    }

    else
    {
        for(int i=0;i<5;i++)
        {
            cout<<arr3[i]<<" ";
        }
    }

}
