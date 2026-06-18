#include <stdio.h>

void solve()
{
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    for(int i = 0; i <= n-1; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
        s[i] += 32;
    }
    int stop = 0;
    if(s[0] != 'm' || s[n-1] != 'w')
    printf("NO\n");
    else 
    {
        for(int i = 0; i < n-1 && !stop; i++)
        {
            if(s[i] == s[i+1])
            continue;
            else if(s[i] == 'm' && s[i+1] != 'e')
            {
                printf("NO\n");
                stop = 1;
            }
            else if(s[i] == 'e' && s[i+1] != 'o')
            {
                printf("NO\n");
                stop = 1;
            }
            else if(s[i] == 'o' && s[i+1] != 'w')
            {
                printf("NO\n");
                stop = 1;
            }
            else if(s[i] == 'w' && s[i+1] != 'w')
            {
                printf("NO\n");
                stop = 1;
            }
        }
        if(!stop)
        printf("YES\n");
    }

        
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