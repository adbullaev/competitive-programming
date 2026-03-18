#include <bits/stdc++.h>
using namespace std;
long long n,m;
vector<long long> vec;

bool binar_search(long long num)
{
    long long left = 0;
    long long right = vec.size() - 1;

    long long middle;

    while(left<=right)
    {
        middle = (left+right)/2;
        
        if(vec[middle] == num) 
        {
            
            return 1;
        }
        if(vec[middle] < num) 
        {
            left = middle + 1;
        }
        else 
        {
            right = middle - 1;
        }
       
    }
    return 0;

}

int main()
{
    scanf("%lld %lld",&n,&m);
    for(long long i =0;i<n;i++)
    {
        long long s ;
        scanf("%lld" ,&s);
        vec.push_back(s);
    }

    for(long long i = 0; i<m ; i++)
    {
        long long b;
        scanf("%lld",&b);
        printf("%s\n", binar_search(b) ? "YES":"NO");
    }
    
    
    
    
}