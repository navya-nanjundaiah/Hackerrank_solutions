#include <iostream>

using namespace std;

int main()
{
    int a[3],b[3];
    int a1=0;
    int b1=0;
    cin>> a[0]>>a[1]>>a[2];
    cin>> b[0]>>b[1]>>b[2];
    for(int i=0;i<3;i++)
   {
     if(a[i]>b[i])
     a1++;
     else if(a[i]<b[i])
     b1++;
     else {
     ;
     }
 }
 cout<<a1<<b1;
 return 0;
}