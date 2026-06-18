#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    char s1[n+1];
    char s2[n+1];

    scanf("%s",&s1);
    scanf("%s",&s2);

    int moves = 0;
    for(int i = 0; i <= n-1 ; i++)
    {
        int diff =  abs(s1[i] - s2[i]);
        if(diff <= 5 )
        moves += diff;
        else 
        moves += (10 - diff);
    }
    printf("%d",moves);
    return 0;
}