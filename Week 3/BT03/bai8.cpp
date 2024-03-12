#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    sort (t, t+n);
    long long time = 0;
    for (int i = 0; i < n; i++)
    {
        time += (n - 1 - i) * t[i];
    }
    cout << time;
    return 0;
}
