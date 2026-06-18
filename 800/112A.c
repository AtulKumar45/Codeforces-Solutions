#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[100];
    
    scanf("%s %s",&str1,&str2);
    printf("%d",stricmp(str1,str2));

    return 0;
}