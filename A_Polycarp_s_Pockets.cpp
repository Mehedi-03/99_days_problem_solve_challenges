#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int fre[101] = {0};
    for (int i = 0; i < n; i++)
    {
        fre[a[i]]++;
    }
    int m = 0;
    for (int i = 0; i < 101; i++)
    {
        if (fre[i] > m)
        {
            m = fre[i];
        }
    }
    cout << m << endl;

    return 0;
}