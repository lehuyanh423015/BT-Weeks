#include<bits/stdc++.h>
using namespace std;
string to_binary(int x)
{
    string s = "";
    while (x)
    {
        s += (x % 2) + '0';
        x /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
int to_decima(string x)
{
    int k = x.size();
    int ans = 0;
    int d = -1;
    for (int i = k-1; i >= 0; i--)
    {
        d++;
        if (x[i] == '1') ans += pow(2, d);
    }
    return ans;
}
int main()
{
    int x; cin >> x;
    cout << to_binary(x);
    string s; cin >> s;
    cout << to_decima(s);
}
