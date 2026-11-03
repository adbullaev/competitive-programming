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
        string s1,s2,s3;
        cin >> s1 >> s2 >> s3;
        long long winner = 0;
        if((s1[0] == s1[1] && s1[1] == s1[2]) || (s2[0] == s2[1] && s2[1] == s2[2]) || (s3[0] == s3[1] && s3[1] == s3[2]))
        {
            if((s1[0] == s1[1] && s1[1] == s1[2]))
            {
                if(s1[0] == 'X') winner =1;
                else if(s1[0] == 'O') winner = 2;
                else if(s1[0] == '+') winner = 3;
                
            }
            if(s2[0] == s2[1] && s2[1] == s2[2])
            {
                if(s2[0] == 'X') winner =1;
                else if(s2[0] == 'O') winner = 2;
                else if(s2[0] == '+') winner = 3;
                
            }
            if(s3[0] == s3[1] && s3[1] == s3[2])
            {
                if(s3[0] == 'X') winner =1;
                else if(s3[0] == 'O') winner = 2;
                else if(s3[0] == '+') winner = 3;
                
            }
        }
        else if((s1[0] == s2[1] && s2[1] == s3[2] ) || (s3[0] == s2[1] && s2[1] == s1[2] ))
        {
            if(s1[0] == s2[1] && s2[1] == s3[2] )
            {
                if(s1[0] == 'X') winner =1;
                else if(s1[0] == 'O') winner = 2;
                else if(s1[0] == '+') winner = 3;
            }
            else
            {
                if(s3[0] == 'X') winner =1;
                else if(s3[0] == 'O') winner = 2;
                else if(s3[0] == '+') winner = 3;
            }

        }
        else for(long long i = 0;i<3;i++)
        {
            if(s1[i] == s2[i] && s2[i] == s3[i])
            {
                if(s1[i] == 'X') winner =1;
                else if(s1[i] == 'O') winner = 2;
                else if(s1[i] == '+') winner = 3;
               
            }
        }

        if(winner == 0) cout << "DRAW\n";
        else if(winner == 1) cout << "X\n";
        else if(winner == 2) cout << "O\n";
        else  cout << "+\n";
        
    }
}