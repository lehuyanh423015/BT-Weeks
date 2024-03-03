#include <bits/stdc++.h>
using namespace std;

string product(string a, int b)
{
    int carry = 0;
    string res = "";
    int k = a.size();
    for (int i = 0; i < k; i++)
    {
        int s = (a[i] - '0') * b + carry;
        carry = s / 10;
        res += ((char) (s % 10 + '0'));
    }
    if (carry > 0)
        while (carry != 0)
        {
            res += ((char) (carry % 10 + '0'));
            carry /= 10;
        }
    reverse(res.begin(), res.end());

    return res;
}

int main()
{
    int n; cin >> n;
    int x = 1000000;
    int y = 1000000;
    int x1, y1;
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1;
        x = min (x, x1);
        y = min (y, y1);
    }
    string s = "";
    while (x)
    {
        s += (char) (x % 10 + '0');
        x /= 10;
    }
    cout << product(s, y);
    return 0;
}
