#include <bits/stdc++.h>
using namespace std;

int t;
int main()
{
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        string s;
        cin >> s;
        size_t pos = s.find('4');
        if(pos !=string::npos && n-pos >=9)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
}