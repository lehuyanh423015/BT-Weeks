#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool prime (ll x)
{
    ll k = sqrt(x);
    if (x < 2) return false;
    if (x < 4) return true;
    for (ll i = 2; i <= k; i++)
        if (x % i == 0) return false;
    return true;
}

int main()
{
    ll n;
    cin >> n;
    string ans = prime(n) ? "Yes" : "No";
    cout << ans;

    return 0;
}

