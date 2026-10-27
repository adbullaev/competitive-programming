#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double c ;
    cin >> c;

    double l = 0;
    double r = 2e11;

    for(long long i = 0;i<100;i++)
    {
        double m = (r+l)/2;
        double x = m*m + sqrt(m);
        if(x < c)
        {
            l = m;
        }
        else r = m;
    }

    cout << fixed << setprecision(6) << r << "\n";
    

}