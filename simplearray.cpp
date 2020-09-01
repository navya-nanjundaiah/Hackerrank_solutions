#include <bits/stdc++.h>
    
using namespace std;
    
int main() {
    int a[1000],n=1,i=0,result=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
        result=result+a[i];
        }
    cout<<result; 
    return 0;
}
