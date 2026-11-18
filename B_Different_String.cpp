#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        string s; 
        cin>>s; 
        string a = s;
        sort(a.begin(), a.end());
        if(s == a)
        {
            reverse(a.begin(), a.end());
        }
        if(s == a)
        {
            cout<<"NO"<<endl; 
        }
        else
        {
            cout<<"YES"<<endl; 
            cout<<a<<endl; 
        }
  
    }
    return 0; 
}