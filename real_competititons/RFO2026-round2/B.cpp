#include <bits/stdc++.h>
using namespace std;
int n,m,k;
int mink = 0;
int maxk= 0;
int main()
{
    scanf("%d %d %d",&n,&m,&k);
    k = k*m;
    if(k%n != 0)
    {
        mink = k/n;
        maxk = mink+1;  
    }
    else
    {
        mink = k/n;
        maxk = mink;
    }
    
    printf("%d %d\n",mink,maxk);
}