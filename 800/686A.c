#include <stdio.h>

int main()
{
    int n;
    long long ice;
    scanf("%d %lld", &n, &ice);

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        char c;
        long long ice2;

        scanf(" %c %lld", &c, &ice2);

        if(c == '+')
        {
            ice += ice2;
        }
        else
        {
            if(ice >= ice2)
                ice -= ice2;
            else
                count++;
        }
    }

    printf("%lld %d\n", ice, count);

    return 0;
}