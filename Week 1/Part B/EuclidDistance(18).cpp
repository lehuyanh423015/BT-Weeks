#include<bits/stdc++.h>
using namespace std;
struct toado
{
    double x,y;
    double euclidDistance (toado v1, toado v2)
    {
        double dx = v1.x - v2.x;
        double dy = v1.y - v2.y;
        return sqrt(dx * dx + dy * dy);
    }

};
int main()
{
    toado v1,v2;
    cin >> v1.x >> v1.y >> v2.x >> v2.y;
    toado d;
    cout << fixed << setprecision(2) << d.euclidDistance(v1,v2);
}
