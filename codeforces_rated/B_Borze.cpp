/*
* author: marjanhasan
* created: 2024-07-07 13:15:31
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;

    string ans;

    for(int i = 0; i < s.size(); )
    {
        if(s[i] == '-' && s[i + 1] == '.') 
            ans.push_back('1'), i += 2;
        else if(s[i] == '-' && s[i + 1] == '-') 
            ans.push_back('2'), i += 2;
        else if(s[i] == '.' || (s[i] == '.' && s[i + 1] == '-')) 
            ans.push_back('0'), i++;
    }

    cout << ans << nl;
    return 0;
}