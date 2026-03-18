#include <bits/stdc++.h>
using namespace std;

int n,ans = 0;
vector<int> vec ;


int main()
{
    
    scanf("%d",&n);
    int m;
    scanf("%d",&m)
    for(int i = 1 ; i<n;i++)
    {
        int b;
        scanf("%d",&b);
        ans += abs(b-m);
        m = b;
    }
    printf("%d",ans);
}
