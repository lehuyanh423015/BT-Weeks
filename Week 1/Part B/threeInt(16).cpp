#include<bits/stdc++.h>
using namespace std;
string threeInt(int a, int b, int c)
{
    if (a == b && b == c) return "true";
    return "false";
}
int main()
{
    int a,b,c; cin >> a >> b >> c;
    cout << threeInt(a,b,c);
}
