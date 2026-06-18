#include<stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    scanf("%d",&n);

    int len[2][2];
    int k= 1;
    while(k <= 4){   
    for(int i = 0;i <= 1 ; i++)
    {
        for(int j = 0; j <= 1 ; j++)
        {
            scanf("%d",&len[i][j]);
        }
    }k++;
}

    


    return 0;
}