#include <iostream>
using namespace std;

void printArray(int *brr,int n)
{
    for(int i=0; i<n;i++)
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

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr = &arr[0];

    cout<<"printing the array"<<endl;
    printArray(ptr,5);

    

}