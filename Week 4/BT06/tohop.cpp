#include<bits/stdc++.h>
using namespace std;
int n, k;
char tohop[100];
map <string, int> mp;
void print()
{
    string s = "";
    for (int i = 0; i < k; i++) s += tohop[i];
    sort(s.begin(), s.end());
    if (mp[s] != 1)
    {
        cout << s << '\n';
        mp[s] = 1;
    }
}
void test(int x)
{
    for (int i = 0; i < n; i++)
    {
        tohop[x] = 'a' + i;
        bool ck = 1;
        for (int j = 0; j < x; j++)
        {
            if (tohop[x] == tohop[j])
            {
                ck = 0;
                break;
            }

        }
        if (x == k)
        {
            print();
            break;
        }
        if (ck) test(x+1);
    }
}
int main()
{

    cin >> n >> k;
    int x = 0;
    test(0);
}
