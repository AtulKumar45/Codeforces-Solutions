#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    scanf("%s",name);
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++)
    {
        int n = 1;
        for(int j = 0; j < i; j++)
        {
            if (name[i] == name[j])
            {
               n = 0; 
               break;  
            }    
        }
        if(n)
        count++;
    }
    if(count % 2 == 0)
    printf("CHAT WITH HER!");
    else
    printf("IGNORE HIM!");

    return 0;
}
/*
#include <stdio.h>

int main() {
    char name[100];
    scanf("%s", name);

    int freq[26] = {0};

    for(int i = 0; name[i] != '\0'; i++) {
        freq[name[i] - 'a'] = 1;
    }

    int count = 0;
    for(int i = 0; i < 26; i++) {
        if(freq[i])
            count++;
    }

    if(count % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}
*/