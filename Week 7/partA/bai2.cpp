#include<iostream>
using namespace std;

void f1(int a[]) {
    cout<< sizeof(a)<< endl;
}
void f2(int a[5]) {
    cout<< sizeof(a)<< endl;
}

int main() {
    int A[5] = {1,2,3,4,5};
    cout<< sizeof(A)<< endl;

    f1(A);
    f2(A);

    return 0;
}
