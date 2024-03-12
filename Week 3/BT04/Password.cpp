#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string pass[n];
    string s;
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if ((int) (s.size()) % 2 != 0)
        {
            pass[k] = s;
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        reverse(pass[i].begin(), pass[i].end());
        int sz = (int) pass[i].size();
        for (int j = i + 1; j < k; j++)
        {
            if ((int) pass[j].size() == sz && pass[i] == pass[j])
            {
                cout << sz << ' ' << pass[i][sz / 2];
                return 0;
            }
        }
    }
}
