#include <stdio.h>
#include <string.h>

void solve()
{
    int n, k;
    scanf("%d %d", &n, &k);

    char s[n + 1];
    scanf("%s", s);

    for (int i = 0; i < k; i++)
    {
        int count = 0;

        for (int j = i; j < n; j += k)
        {
            if (s[j] == '1')
                count++;
        }

        if (count % 2)
        {
            printf("NO\n");
            return;
        }
    }

    printf("YES\n");
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
        solve();

    return 0;
}