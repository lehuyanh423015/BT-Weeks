#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d[5];
    for (int i = 0; i < 5; i ++) cin >> d[i];
    sort(d, d+5);
    cout << d[2];
}
