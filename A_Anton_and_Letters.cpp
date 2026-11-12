#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    getline(cin,s); 
    int fre[27] = {0};
    for(int i = 0; i<s.size(); i++)
    {
        if(isalpha(s[i]))
        {
            fre[s[i] - 'a'] = 1;
        }
    }
    int count = 0; 
    for(int i = 0; i < 26; i++)
    {
        if(fre[i] == 1)
        {
            count++; 
        }
    }
    cout<<count<<endl; 
    
    return 0; 
}