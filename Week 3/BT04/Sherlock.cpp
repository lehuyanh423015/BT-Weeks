#include<bits/stdc++.h>
using namespace std;

bool Sherlock(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i != n-1)
        {
            if (b[i] - a[i] == b[n-1] - b[i]) return true;
        }
        else
        {
            if (i == 0 && b[n-1] - b[i] == 0) return true;
            if (i == n-1 && b[i] - a[i] == 0) return true;
        }
    }
    return false;
}

int main()
{
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n; cin >> n;
        int a[n], b[n];

        cin >> a[0];
        b[0] = a[0];
        for (int j = 1; j < n; j++)
        {
            cin >> a[j];
            b[j] = b[j-1] + a[j];
        }
        if (Sherlock(a,b,n)) cout << "YES\n";
        else cout << "NO\n";
    }
}
