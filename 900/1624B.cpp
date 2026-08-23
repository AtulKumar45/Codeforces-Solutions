#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ap = 0;
    if((2 * b - c > 0 && (2 * b - c) % a == 0) ||
        ((a + c) % 2 == 0 && ((a + c) / 2 )% b == 0) ||
        (2 * b - a > 0 && (2 * b - a) % c == 0) )
        ap = 1;

    cout<<(ap ? "YES":"NO")<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}