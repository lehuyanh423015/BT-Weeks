#include<bits/stdc++.h>
using namespace std;
int n, k;
char hoanvi[100];
void print()
{
    for (int i = 0; i < k; i++) cout << hoanvi[i] ;
    cout << '\n';
}
void test(int x)
{
    for (int i = 0; i < n; i++)
    {
        hoanvi[x] = 'a' + i;
        bool ck = 1;
        for (int j = 0; j < x; j++)
        {
            if (hoanvi[x] == hoanvi[j])
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
