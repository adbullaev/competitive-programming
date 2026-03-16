#include <bits/stdc++.h>
using namespace std;
int n;
int a,b,c;
int result;
int main()
{
    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    
    if(n/10 <= c) 
    {
        c-=n/10;
        n%=10;

    }
    if(n/5 <= b) 
    {
        b-=n/5;
        n%=5;
    }
    if(n/1 <= b) n%=1;
    else if(n/5 <= b) n = 5-n;
    else if(n/10 <= c) n = 10-n;
    printf("%d",n);
}