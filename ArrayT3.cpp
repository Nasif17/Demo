#include <iostream>
using namespace std;

void printArray(int *brr,int m,int n)
{
    for(int i=0; i<m;i++)

    {
        for(int j=0 ;j<n;j++)
        {
        if (*brr%2==0)
        {
            cout<<*brr<<" is an even number"<<endl;
            brr++;
        }
        else
        {
            cout<<*brr<<" is an odd number"<<endl;
            brr++; 
        }
        }
    }
}

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int *ptr = &arr[0][0];

    cout<<"printing the array"<<endl;
    printArray(ptr,3,3);

    

}