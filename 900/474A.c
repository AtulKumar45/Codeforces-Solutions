#include<stdio.h>
#include<string.h>

int main(){
    char str[31] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dirn;
    scanf(" %c",&dirn);
    char msg[101];
    scanf("%100s", msg);
    int k;
    if(dirn == 'R')
    k = (-1);
    else
    k = 1;
    
    for(int i = 0; msg[i] != '\0' ; i++)
    {
        for(int j = 0; j < 30 ; j++)
        {
            if(str[j] == msg[i]){
            msg[i] = str[j+k];
            break;
            }
        }
    }
    printf("%s",msg);
    return 0;
}