#include <iostream>

using namespace std;

int main()
{
 int a[100][100];
 int n;
 int sum1=0;
 int sum2=0;
 int i,j;
 int diff=0;
    cin>> n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for(i=0;i<n;i++)
      {  sum1+=+a[i][i];        
         sum2+=a[i][n-1-i];
      }
    
   cout<<abs(sum1-sum2); 
    return 0;
}
