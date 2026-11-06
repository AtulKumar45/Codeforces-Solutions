#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    vector <int> v = {x1,x2,x3,x4};
    sort(v.begin(),v.end());
    cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2]<<endl;
    return 0;
}