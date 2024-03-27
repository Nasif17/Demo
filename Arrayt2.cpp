#include <iostream>
using namespace std;

int *inputArray (int *brr, int n)
{
    int *temp = brr;
  for (int  i = 0; i < n; i++)
  {
    cin>>*brr;
    brr++;
  }
  return temp;
  
}


void printArray(int *brr, int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<*brr<<" ";
        brr++;
    }

}

int main()
{
    cout <<"input the array size"<<endl;
    int t;
    cin>>t;
     int arr[t];

     int *ptr =&arr[0];

     cout<<"give elements of the array"<<endl;
    inputArray(ptr,t);
    cout<<"printing the array"<<endl;
    printArray(ptr,t);

    

}