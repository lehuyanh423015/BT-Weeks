#include<bits/stdc++.h>
using namespace std;

int salary(int &hours)
{
    if (hours < 100) return 0;
    if (hours < 151) return 1200000 + (hours - 100) * 16000;
    if (hours < 201) return 2000000 + (hours-150) * 20000;
    return 3000000 + (hours - 200) * 25000;
}

int fax(int &expectedIncome)
{
    // k : thu nhap sau khi tru bao hiem
    int k = expectedIncome /  100 * 91;
    if (k <= 1000000) return 0;
    if (k <= 1500000) return (k - 1000000) / 10;
    if (k <= 2000000) return 50000 + (k - 1500000) / 100 * 15;
    return 125000 + (k - 2000000) / 5;
}

int realIncome(int &expectedIncome)
{
    return expectedIncome /  100 * 91 - fax(expectedIncome);
}

int loanAmount(int &loan)
{
    return round(loan * 1.02);
}

int main()
{
    int hours[] = {155, 145, 125, 135, 100, 100, 145, 135,  100, 155, 170, 180};
    int loan = 10000000;
    int expectedIncome;
    int rIc, lA;
    int month = 0;
    do
    {
        expectedIncome = salary(hours[month]);
        rIc = realIncome(expectedIncome);
        lA = loanAmount(loan);
        loan = lA - (rIc - 500000);
        cout << "Thu nhap sau thue cua sinh vien: " << rIc << '\n';
        cout << "Tien lai ngan hang tinh vao cuoi thang: " << lA << '\n';
        cout << "Tien du no cua sinh vien vao dau thang: " << loan << '\n';
        month++;
        cout << '\n';
    }
    while (loan > 0);
    cout << "-------------------------------------- \n";
    cout << "Sinh vien tra het no sau: " << month << " thang \n";
    cout << "Khoan thanh toan cuoi cung cua sinh vien: " << lA;
}
