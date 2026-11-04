#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[4];
    for(int i = 0; i <= 3 ; i++)
    cin>>arr[i];
    string s;
    cin>>s;
    int cal = 0;
    for(int i = 0; i <= s.length()-1 ; i++)
    {
        switch (s[i])
        {
        case '1' :
            cal += arr[0]; 
            break;
        case '2' : 
            cal += arr[1];
            break;
        case '3' : 
            cal += arr[2];
            break;
        case '4' : 
            cal += arr[3];
            break;            
        }
    }
    cout<<cal<<endl;

    return 0;
}