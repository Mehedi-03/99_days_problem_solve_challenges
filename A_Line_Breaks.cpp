#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int result = 0; 
        int sum = 0; 
        int flag = true;
        for(int i = 0; i<n; i++)
        {
            string s; 
            cin>>s; 
            if(flag && sum + s.size() <= m)
            {
                sum += s.size(); 
                result++;
            }
            else
            {
                flag = false;
            }
        }
        cout<<result<<endl; 
    }
    return 0; 
}