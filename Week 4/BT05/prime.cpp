#include <bits/stdc++.h>
using namespace std;

bool prime(int x)
{
    if (x < 2) return false;
    if (x < 4) return true;
    int k = sqrt(x);
    for (int i = 2; i <= k; i ++)
    {
        if (x % i == 0) return false;
    }
    return true;
}
int main()
{
    int n; cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (prime(i)) cout << i << ' ';
    }
    return 0;
}
