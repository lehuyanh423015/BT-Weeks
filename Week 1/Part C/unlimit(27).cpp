#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == -1)
        {
            cout << '\n';
            cout << "Bye";
            break;
        }
        cout << (n >= 0 && !(n % 5)) ? n / 5 : -1;
        cout << ' ';
    }
}
