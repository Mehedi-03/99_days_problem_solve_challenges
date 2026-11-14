
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int total = a + b + c + n;

        if(total % 3 == 0 && total / 3 >= a &&
           total / 3 >= b && total / 3 >= c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
