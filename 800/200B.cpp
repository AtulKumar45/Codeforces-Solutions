#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin >> n;

double ans = 0;

for(int i = 0; i < n; i++)
{
    double x;
    cin >> x;
    ans += x;
}

cout << fixed << setprecision(12) << ans / n << endl;

return 0;

}
