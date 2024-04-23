#include<bits/stdc++.h>
using namespace std;
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;// lệnh xoá vùng nhớ mà p và p2 chỏ tới, khiến cho những lệnh về sau bị lỗi undefined behavior
    *p2 = 100;
    cout << *p2;
    delete p2;
}

