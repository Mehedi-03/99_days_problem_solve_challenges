#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g , c, d; 
    cin>>g>>c>>d;
    int mn = min({g, c, d});
    int mx = max({g, c, d}); 
    int diff = mx - mn; 
    if(diff >= 10)
    {
        cout<<"check again"<<endl; 
    }
    else
    {
        vector<int>v = {g, c, d};
        sort(v.begin(), v.end());
        cout<<"final"<<" "<<v[1]<<endl; 
    }
    return 0; 
}