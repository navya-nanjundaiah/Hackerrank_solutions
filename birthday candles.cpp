#include <iostream.h>
using namespace std;

int main() {
int i,n;
int max = 0;
cin>> n;
int a[n];
int count = 0;
for (i = 1; i <= n; i++) {
cin>> a[i]
if (max < a[i])
max = a[i];
}
for (i = 1; i <= n; i++)
if (a[i] == max)
cout<< count++;
return 0;
}