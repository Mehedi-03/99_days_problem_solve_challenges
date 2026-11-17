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
        string a; 
        cin>>a; 
        int m; 
        cin>>m; 
        string b , c; 
        cin>>b>>c;  
        for(int i = 0; i<c.size(); i++)
        {
            if(c[i] == 'D')
            {
                a.push_back(b[i]);
            }
            else if(c[i] == 'V')
            {
                a.insert(a.begin(), b[i]);  
            }
        }
        cout<<a<<endl; 
    }
    return 0; 
}