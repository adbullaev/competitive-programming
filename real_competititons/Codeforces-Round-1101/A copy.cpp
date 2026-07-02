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
        long long size;
        cin >> size;

    vector<long long> friends(size);
    for(long long i = 0; i < size; i++) {
        cin >> friends[i];
    }


    nth_element(friends.begin(), friends.begin() + size / 2, friends.end());

long long target = friends[size / 2];
long long L = 0, R = 0;

for(long long j = 0; j < size; j++) {
    if(friends[j] < target) L++;
    if(friends[j] > target) R++;
}

cout << max(L, R) << "\n";
    }   


}