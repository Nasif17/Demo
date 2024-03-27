#include <iostream>
using namespace std;
int main()
{
   int value=2, arr[6]={9,3,5,7,2,8};
char data='x';
int *p, *q; char *r;
p=&value; q=arr; r=&data;
*p-=1; --*r;
cout<< value << " "<< data<< endl;
cout<< *p;
cout<< *p+2;
cout<< *(q+4);
cout<< arr[value];
 
} 
