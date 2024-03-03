#include<bits/stdc++.h>
using namespace std;
bool check(int a, int b, int c)
{
    if (a + b <= c || a + c <= b || b + c <= a) return false;
    return true;
}
int main()
{
    int a,b,c; cin >> a >> b >> c;
    if (check(a,b,c))
    {
        double p = (a + b + c) / 2.0;
        double area = sqrt(p * (p-a) * (p-b) * (p-c));
        cout << fixed << setprecision(2) << area;
    }
    else cout << "khong phai tam giac";
}

