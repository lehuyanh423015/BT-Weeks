#include<bits/stdc++.h>
using namespace std;
void print(int m, int n)
{
    for (int i = 0; i < m; i++) cout << ' ';
    for (int i = 0; i < n; i++) cout << '*';
    cout << '\n';
}
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        print(n-i, 2*(i-1)+1);
    }
}
