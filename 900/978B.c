#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    int count = 0;
    int consecutive = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == 'x')
        {
            consecutive++;

            if(consecutive >= 3)
                count++;
        }
        else
        {
            consecutive = 0;
        }
    }

    printf("%d\n", count);

    return 0;
}