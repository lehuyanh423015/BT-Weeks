#include<bits/stdc++.h>
using namespace std;

class Thisinh
{
    public:
    int vitri = 0;
    void check()
    {
        if (vitri < 0) vitri = 0;
    }
};

class Rua : public Thisinh
{
    public:
    void tiendai()
    {
        vitri += 3;
    }
    void tienngan()
    {
        vitri += 1;
    }
    void truot()
    {
        vitri -= 6;
    }
};

class Tho : public Thisinh
{
    public:
    void tiendai()
    {
        vitri += 9;
    }
    void tienngan()
    {
        vitri += 1;
    }
    void truotdai()
    {
        vitri -= 12;
    }
    void truotngan()
    {
        vitri -= 2;
    }
    void ngu()
    {
        vitri += 0;
    }
};

void rua_move(Rua& rua, int& status)
{
    if (status > 5)
    {
        rua.tiendai();
        cout << "Rua tien 3. Vi tri: ";
        cout << setw(2) << rua.vitri;
    }
    else
    {
        if (status > 2)
        {
            rua.tienngan();
            cout << "Rua tien 1. Vi tri: ";
            cout << setw(2) << rua.vitri;
        }
        else
        {
            rua.truot();
            rua.check();
            cout << "Rua truot 6. Vi tri: ";
            cout << setw(2) << rua.vitri;
        }
    }
}

void tho_move(Tho& tho, int& status)
{
    if (status > 8)
    {
        tho.ngu();
        cout << "Tho dung im. Vi tri: ";
        cout << setw(2) << tho.vitri;
    }
    else
    {
        if (status > 6)
        {
            tho.tiendai();
            cout << "Tho tien 9. Vi tri: ";
            cout << setw(2) << tho.vitri;
        }
        else
        {
            if (status == 6)
            {
                tho.truotdai();
                tho.check();
                cout << "Tho truot 12. Vi tri: ";
                cout << setw(2) << tho.vitri;
            }
            else
            {
                if (status > 2)
                {
                    tho.tienngan();
                    cout << "Tho tien 1. Vi tri: ";
                    cout << setw(2) << tho.vitri;
                }
                else
                {
                    tho.truotngan();
                    tho.check();
                    cout << "Tho truot 2. Vi tri: ";
                    cout << setw(2) << tho.vitri;
                }
            }
        }
    }
}
int main()
{
    srand(time(0));
    Rua rua;
    Tho tho;
    int status;
    while (tho.vitri < 70  && rua.vitri < 70)
    {
        status = 1 + rand() % 10;
        rua_move(rua, status);
        cout << "     ";
        status = 1 + rand() % 10;
        tho_move(tho, status);
        cout << '\n';
    }
    if (tho.vitri >= 70) cout << "Tho thang.";
    else cout << "Rua thang.";
}
