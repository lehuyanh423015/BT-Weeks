#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    bool prime[n+1];
    memset(prime, 0, n+1);
    for (int i = 2; i < n; i++)
    {
        if (! prime[i]) cout << i << ' ';
        for (int j = i * 2; j <= n; j += i) prime[j] = 1;
    }
}
