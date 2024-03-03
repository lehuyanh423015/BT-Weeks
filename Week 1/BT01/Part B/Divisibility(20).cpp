#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y; cin >> x >> y;
    bool b = (x % 7 == 0 && y % 7 == 0) ? 1 : 0;
    cout << b;
}
