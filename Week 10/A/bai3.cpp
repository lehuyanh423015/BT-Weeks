#include<bits/stdc++.h>
using namespace std;
int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;//lệnh cerr này không hoạt động như mong muốn
    /* dòng delete c đã gây ra lỗi cho chương trình, vì delete chỉ xoá vùng nhớ đươc cấp phát bằng new,
    còn c chỉ là con trỏ trỏ tới một vùng nhớ đã có sẵn, nên sẽ gây ra lỗi undefined behavior */
}

