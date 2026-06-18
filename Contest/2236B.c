#include <stdio.h>

void solve()
{
    int n,k;
    scanf("%d %d",&n,&k);

    char s[n+1];
    scanf("%s",&s);

    int count = 0;
    for(int i = 0; s[i] != '\0' ; i++)
    {
        if(s[i] == '1')
        count++;
    }
    if(count % 2 == 0)
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