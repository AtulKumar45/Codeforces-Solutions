#include<stdio.h>
#include<string.h>

int main(){
    char s[101];
    scanf("%s",&s);
    int len =  strlen(s);
    int cntcap = 0;
    for(int i = 0; s[i] != '\0' ; i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        cntcap++;
    }
    int cntsmall = len - cntcap;
    if(cntsmall >= cntcap)
    {
    for(int i = 0; s[i] != '\0'; i++)
    {
    if(s[i] >= 65 && s[i] <= 90)
    s[i] += 32;
    }
    }
    else
    {
    for(int i = 0; s[i] != '\0'; i++)
    {
    if(s[i] >= 97 && s[i] <= 122)
    s[i] -= 32;
    }
    }
    printf("%s",s);
    return 0;
}