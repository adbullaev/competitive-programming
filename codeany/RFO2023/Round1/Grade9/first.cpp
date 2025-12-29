#include <bits/stdc++.h>
using namespace std;

string s;
string vowels{"AEIOUY"};
int last_position = 0;
int current_position = 0;
int jump_len = 0;

int main()
{
    cin >> s;
    s.insert(0,1,'A');
    s.push_back('A');

    for(int i = 1; i<=s.size(); i++)
    {

        if(vowels.find(s[i]) != string::npos)
        {
            last_position = current_position;
            current_position = i;
            if((current_position - last_position) > jump_len) jump_len = current_position - last_position;
        }
   }

    printf("%d\n",jump_len);
}