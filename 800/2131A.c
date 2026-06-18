#include <stdio.h>

void solve()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i = 0; i <= n-1; i++)
    scanf("%d",&a[i]);
    for(int i = 0; i <= n-1; i++)
    scanf("%d",&b[i]);

    int iter = 1;
    for(int i = 0; i <= n-1; i++){
        if(a[i] > b[i])
        {
            iter += a[i] - b[i];
        }
    }
    printf("%d\n",iter);
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        solve();
    }

    return 0;
}