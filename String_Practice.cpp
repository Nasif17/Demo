#include <iostream>
using namespace std;
int main ()
{
    float x[5] ={1.1,2.2,3.3,4.4};
    char vowel[6]= {'A','E','I','O','*','\0'};
    char vowel1[]= {"AEIOU"};
    string vowel2[] = {"AEIOU"};

    for (int i = 0; i < 6; i++)
    {
        cout <<vowel[i];
    }
     cout <<endl;
    for (int i = 0; i < 6; i++)
    {
        cout <<vowel1[i];
    }
      cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout <<vowel2[i];
    }
    cout << endl;
    
}