#include <bits/stdc++.h>
using namespace std;
struct part
{
    long long score;
    long long time;
    long long pos;
};

bool comp( const part& a,const part& b)
{
    if(a.score != b.score) return a.score > b.score;
    if(a.time != b.time) return a.time < b.time;
    return a.pos == 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--)
    {
        long long n,m,h;
        cin >> n>> m >> h;
        vector<vector<long long>> time(n);
        vector<part> p;
        for(long long i = 0;i<n;i++)
        {
            for(long long j = 0;j<m;j++)
            {
                long long tij;
                cin >> tij;
                time[i].push_back(tij);
            }
            sort(time[i].begin(),time[i].end());
            
            long long local_time = 0;
            long long overal_time = 0;
            long long local_score= 0;
            for(long long j = 0;j<m;j++)
            {
                if(overal_time+time[i][j] <= h)
                {
                    overal_time+=time[i][j];
                    local_time += overal_time;
                    local_score++;
                }
                else break;
            } 
            p.push_back({local_score,local_time,i+1});
        }
        long long pos;
        sort(p.begin(),p.end(),comp);
        for(long long i = 0;i<n;i++)
        {
            if(p[i].pos == 1)
            {
                pos = i+1;
                break;
            }
        }    
        cout << pos << "\n";
        
    }

}