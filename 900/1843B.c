#include <stdio.h>
#include <stdlib.h>

void solve()
{
    long long int n; 
    scanf("%lld",&n);
    long long int a[n];
    for(long long int i = 0; i <= n-1; i++)
    scanf("%lld",&a[i]);

long long sum = 0;
long long count = 0;
int prev = 0;

for(int i = 0; i < n; i++)
{
    sum += llabs(a[i]);

    if(a[i] < 0)
    {
        if(!prev)
        {
            count++;
            prev = 1;
        }
    }
    else if(a[i] > 0)
    {
        prev = 0;
    }
}

    printf("%lld %lld\n",sum,count);

}

int main()
{
    long long int t;
    scanf("%lld", &t);

    while(t--)
    {
        solve();
    }

    return 0;
}