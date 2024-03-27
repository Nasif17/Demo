#include <iostream>
using namespace std;

int *inputArray (int *brr, int m,int n)
{
    int *temp = brr;
    for(int i=0 ; i<m;i++)
    {
  for (int  j = 0; j < n; j++)
  {
    cin>>*brr;
    brr++;
  }
    }
  return temp;
  
}


void printArray(int *brr, int s,int t)
{
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<t;j++)
        {
        cout<<*brr<<" ";
        brr++;
        }
        cout<<endl;
    }

}

int main()
{
    cout <<"input the row size"<<endl;
    int t,s;
    cin>>t;
    cout <<"input the column size"<<endl;
    cin>>s;
     int arr[t][s];

     int *ptr =&arr[0][0];

     cout<<"give elements of the array"<<endl;
    inputArray(ptr,t,s);
    cout<<"printing the array"<<endl;
    printArray(ptr,t,s);

    

}