#include <bits/stdc++.h>
using namespace std;

long long t;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        string line1;
        string line2;

        cin >> line1;
        cin >> line2;

        if(line1[0] == ')' || line1[n-1] == '(')
        {
            cout << "NO" << "\n";
            continue;
        }

        if(line2[0] == ')' || line2[n-1] == '(')
        {
            cout << "NO" << "\n";
            continue;
        }

        long long line1_sad = 0,line1_happy = 0;
        long long line2_sad = 0,line2_happy = 0;
        
        long long pairs = 0;

        for(long long i = 0;i<n;i++)
        {
            if(line1[i] == '(') line1_sad++;
            if(line2[i] == '(') line2_sad++;
            if(line1[i] == ')') line1_happy++;
            if(line2[i] == ')') line2_happy++;
            if(line1[i] != line2[i]) pairs++;
        }

        long long  line1_overal = abs(line1_sad-line1_happy);
        long long  line2_overal = abs(line2_sad-line2_happy);

        if(line1_overal != line2_overal) 
        {
            cout << "NO" << "\n";
            continue;
        }
        else
        {
            cout << "YES" << "\n";
            continue;
        }

    }

}