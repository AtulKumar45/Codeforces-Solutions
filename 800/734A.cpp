#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>> s;
    int cntA = count(s.begin(), s.end(), 'A');
    int cntD = n- cntA;
    if(cntA > cntD)
    cout<<"Anton"<<endl;
    else if(cntA < cntD)
    cout<< "Danik"<<endl;
    else
    cout<<"Friendship"<<endl;
    
    return 0;
}