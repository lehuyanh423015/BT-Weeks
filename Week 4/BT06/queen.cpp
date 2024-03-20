#include<bits/stdc++.h>
using namespace std;
int queen[8];

void print()
{
    for (int i : queen) cout << i + 1 << ' ';
    cout << '\n';
}
void test(int x)
{
    for (int i = 0; i < 8; i++)
    {
        queen[x] = i;
        bool ck = 1;
        for (int j = 0; j < x; j++)
        {
            if (abs(x - j) == abs(i - queen[j]) || i == queen[j])
                {
                    ck = 0;
                    break;
                }
        }
        if (x == 8) print();
        if (ck) test(x+1);
    }
}

int main()
{
    int n = 0;
    test(n);
}
