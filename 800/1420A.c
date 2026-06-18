// #include <stdio.h>

// void solve()
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n];

//     for(int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     for(int i = 0; i < n - 1; i++)
//     {
//         if(arr[i] <= arr[i + 1])
//         {
//             printf("YES\n");
//             return;
//         }
//     }

//     printf("NO\n");
// }

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     while(t--)
//         solve();

//     return 0;
// }
#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] <= arr[i + 1])
        {
            printf("YES\n");
            return;
        }
    }

    printf("NO\n");
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
        solve();

    return 0;
}