#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        int a[n]; 
        for(int i = 0; i<n; i++)
        {
            cin>>a[i]; 
        } 
        int fre[n+1] = {0}; 
        for(int i = 0; i<n; i++)
        {
            fre[a[i]]++;
        }
        int result = 0; 
        for(int i = 0; i<=n; i++)
        {
            result = result + fre[i] / 2; 
        }
        cout<<result<<endl; 
    }
    return 0; 
}