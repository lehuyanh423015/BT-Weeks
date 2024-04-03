#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if (y == 0) return x;
    return gcd(y, x%y);
}

bool ntcn(int a, int b)
{
    if (gcd(a,b) == 1) return true;
    return false;
}
int main()
{
    int a,b; cin >> a >> b;
    cout << ntcn(a,b);
}
