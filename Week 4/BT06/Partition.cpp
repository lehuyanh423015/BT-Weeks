#include<bits/stdc++.h>
using namespace std;
int n;
vector <int> vt;
void print(int x)
{
    for (int i = 0; i <= x; i++) cout << vt[i] << ' ';
    cout << '\n';
}
void test(int x, int k)
{
    for (int i = k; i > 0; i--)
    {
        vt[x] = i;
        int temp = k - i;
        bool ck = 1;
        for (int j = 0; j < x; j++)
        {
            if (vt[j] < i)
            {
                ck = 0;
                break;
            }
        }
        if (ck && temp == 0) print(x);
        if (ck) test(x+1, temp);
    }
}
int main()
{
    cin >> n;
    vt.resize(n);
    int x = 0;
    test(x, n);
}
