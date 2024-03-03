#include <bits/stdc++.h>
using namespace std;
double x;
int main()
{
    int x, y;
    cin >> x >> y;
    cout << "Khoanh cach tu diem (" << x << ", " <<  y << ") den goc toa do (0, 0) la: ";
    cout << fixed << setprecision(2) << sqrt(x * x + y * y);
	return 0;
}
