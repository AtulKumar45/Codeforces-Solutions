#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    int count = 0;
    for(int i = 0 ; s[i] != '\0' ; i++){
        if(s[i+1] == s[i])
        count++;
    }
    printf("%d",count);
    
    return 0;
}