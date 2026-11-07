#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--)
    {
        long long n,d,h;
        cin >> n >> d >> h;
        vector<long long> y;
        
        for(long long i = 0;i<n;i++)
        {
            long long yi;
            cin >> yi;
            y.push_back(yi);
        }
        double S = ((double)(d*h)/(double)2);
        double overal_summ = 0;
        for(long long i = 0;i<n-1;i++)
        {
            if(y[i] + h <= y[i+1])
            {
                overal_summ += S;
            }
            else
            {
               overal_summ += ((double)S - (((double)(S * ((double)(y[i]+h - y[i+1])*(double)(y[i]+h-y[i+1])))) / ((double) h * h))); 
            }
        }
        overal_summ+=S;
        cout << fixed << setprecision(6) << overal_summ << "\n"; 
    
    }   

}