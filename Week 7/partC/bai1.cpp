#include<bits/stdc++.h>
using namespace std;
int xucxac()
{
    return  1 + rand() % 6;
}
int main()
{
    srand(time(0));
    int point[3] = {0,0,0};
    int type;
    cout << "chon che do choi 1 hoac 2: ";
    cin >> type;
    int i = 1;
    while (point[1] < 100 && point[2] < 100)
    {
        if (type == 1)
        {
            int x  = xucxac();
            cout << "xuc xac nguoi choi " << i << ": " << x;
            point[i] += x;
            cout << "     ";
            cout << "tong nguoi " << i << ": ";
            cout << setw(3) << point[i];
            cout << '\n';
            i++;
            if (i > 2) i = 1;
        }
        else
        {
            int x  = xucxac();
            cout << "xuc xac nguoi choi " << i << ": " << x;
            point[i] += x;
            cout << "     ";
            cout << "tong nguoi " << i << ": ";
            cout << setw(3) << point[i];
            cout << '\n';
            if (point[1] == point[2])
            {
                if (i == 1) i = 2;
                else i = 1;
            }
            else
            {
                i = 1;
                if (point[1] > point[2]) i = 2;
            }
        }
    }
    if (point[1] >= 100) cout << "nguoi choi thu nhat thang.";
    else cout << "nguoi choi thu hai thang.";
}
