#include <bits/stdc++.h>
using namespace std;

int n, m, k, dem;
char bando[100][100];
int gt[100][100];
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

void init()
{
    do
    {
        cout << "Nhap kich thuoc ban do va so luong bom: ";
        cin >> n >> m >> k;
    }
    while (k > n * m);
    dem = n * m - k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j ++)
            bando[i][j] = '-';
    srand(time(0));
    while (k)
    {
        int x = rand() % n;
        int y = rand() % m;
        if (bando[x][y] == '-')
        {
            bando[x][y] = '*';
            k--;
            cout << x << ' ' << y << '\n';
        }
    }
}
bool check(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}
int cnt(int x, int y)
{
    dem --;
    int num = 0;
    for (int i = 0; i < 8; i ++)
    {
        int x1 = dx[i] + x;
        int y1 = dy[i] + y;
        if (check(x1, y1) && bando[x1][y1] == '*') num++;
    }
    return num;
}
void print(bool type)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (type)
            {
                if (gt[i][j] > 0) cout << setw(2) << gt[i][j];
                else if (bando[i][j] != '*') cout << setw(2) << bando[i][j];
            }
            else
            {
                if (gt[i][j] >= 0) cout << setw(2) << gt[i][j];
                else cout << setw(2) << bando[i][j];
            }
        }
        cout << '\n';
    }
}
void loang(int x, int y)
{
    bando[x][y] = ' ';
    for (int i = 0; i < 8; i++)
    {
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if (check(x1, y1))
        {
            gt[x1][y1] = cnt(x1, y1);
            if (gt[x1][y1] == 0) loang(x1, y1);
        }
    }
}
void logic()
{
    bool ck = 1;
    int x, y;
    while (ck && dem)
    {
        do
        {
            cout << "Nhap vi tri ban muon kiem tra: ";
            cin >> x >> y;
        }
        while (! check(x, y));

        if  (bando[x][y] == '*')
        {
            cout << "YOU'RE DEAD\n";
            ck = 0;
            print(ck);
        }
        else
        {
            gt[x][y] = cnt(x, y);
            if (gt[x][y] == 0) loang(x, y);
            print(ck);
        }
    }
    if (dem == 0) cout << "YOU WIN";
    cout << "END GAME";
}
int main()
{
    init();
    logic();
}
