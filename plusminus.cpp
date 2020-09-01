#include <bits/stdc++.h>
    
using namespace std;

int main()
{
    int  ar[100],n,pos=0,neg=0,zero=0;
    cin>>n;
    for(int i = 0; i<n; i++)  
    {  
        cin>> ar[i];  
    }  
    for(int i=0; i<n; i++)
    { 
    if(ar[i]>0)
      pos++;
    else if(ar[i]<0)
      neg++;
    else if(ar[i]==0)
      zero++;
    }
   cout<<(float)pos/n<<endl<<(float)neg/n<<endl<<(float)zero/n;
return 0;
}
