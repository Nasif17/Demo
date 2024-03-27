#include<iostream>
using namespace std;

int main()
{

    int arr1[5]={10,20,30,40,50};
    int arr2[7]={1,2,3,4,5,6,7};

    int size1=0,size2=0, count=0;
    size1=sizeof(arr1)/sizeof(arr1[0]);
    size2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[size1+size2];
    for(int i=0;i<size1;i++)
    {
        arr3[i]=arr1[i];
        count++;
    }

    for(int i=0;i<size2;i++)
    {
        arr3[i+count]=arr2[i];
    }

    cout<<"Forward"<<endl;
    for(int i=0;i<(size1+size2);i++)
    {
        cout<<arr3[i]<<" ";
    }

    cout<<endl<<"reverse"<<endl;
    for(int i=(size1+size2)-1;i>=0;i--)
    {
        cout<<arr3[i]<<" ";
    }
}
