#include <stdio.h>
#include <math.h>

void solve()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i <= n-1; i++)
    scanf("%d",&arr[i]);
    
    long long sum = 0;
    for(int i = 0; i <= n-1; i++)
    sum += arr[i];

    long long root = (long long)sqrtl((long double)sum);

    if(root * root == sum)
    printf("YES\n");
    else
    printf("NO\n");

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