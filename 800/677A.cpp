#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h;
    cin>>n>>h;
    int w = 0;
    for(int i= 0; i<= n-1; i++)
    {
        int x;
        cin >> x;
        if(x <= h)
        w++;
        else
        w += 2;
    }
    cout<<w<<'\n';
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}