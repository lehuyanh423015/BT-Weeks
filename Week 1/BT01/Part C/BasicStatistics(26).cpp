#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    double mean;
    int minn, maxn;
    int x;
    double t = 0.0;
    cin >> x; t += x;
    minn = x, maxn = x;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        minn = min(x, minn);
        maxn = max(x, maxn);
        t += x;
    }
    cout << "Mean: " << fixed << setprecision(2) << t / n << '\n';
    cout << "Max: " << maxn << '\n';
    cout << "Min: " << minn;
}
