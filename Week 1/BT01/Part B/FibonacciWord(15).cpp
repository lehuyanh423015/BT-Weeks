#include<bits/stdc++.h>
using namespace std;
int main()
{
    string f[15];
    f[0] = "a";
    f[1] = "b";
    cout << "f[0] = " << f[0] << '\n';
    cout << "f[1] = " << f[1] << '\n';
    for (int i = 2; i <= 10; i++)
    {
        f[i] = f[i-1] + f[i-2];
        cout << "f[" << i << "] = " << f[i] << '\n';
    }
    return 0;
}
