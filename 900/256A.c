#include<stdio.h>

int main()
{
    char s[50], t[50];

    scanf("%s", s);
    scanf("%s", t);

    int pos = 0;  
    for(int i = 0; t[i] != '\0'; i++)
    {
        if(s[pos] == t[i])
        {
            pos++;
        }
    }

    printf("%d", pos + 1);

    return 0;
}