#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s ,t;
    cin>>s>>t;
    if(s.length() != t.length())
    {
        cout<<"NO\n";
        return 0;
    }
    int i = 0, j= s.length()-1;
    while(i < s.length())
    {
        if(s[i] != t[j])
        {
            cout<<"NO\n";
            return 0;
        }
        else {
            i++;
            j--;
        }
    }
    cout<<"YES\n";

    return 0;
}