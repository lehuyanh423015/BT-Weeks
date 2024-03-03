#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    bool b = (((x-y) * (y - z)) >= 0) ? 1 : 0;
    cout << b;
}
