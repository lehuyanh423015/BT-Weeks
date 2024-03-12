#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n+1];
    int b[n+1];
    for (int i = 0; i < n; i++) cin >> a[i];
    a[n] = 99;
    sort(a, a+n+1);
    for (int i = 0; i <= n; i++) cin >> b[i];
    sort(b, b+n+1);
    for (int i = 0; i <= n; i++)
    {
        if (a[i] != b[i])
        {
            cout << b[i];
            break;
        }
    }
    return 0;
}
