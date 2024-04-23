#include<bits/stdc++.h>
using namespace std;
char* concat(const char* a, const char* b) {
     int n=strlen(a);
     int m=strlen(b);
    char* c=new char[n+m+1];
    strcpy(c, a);
    strcpy(c + n, b);

    return c;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";

    char* c = concat(str1, str2);
    cout << c;
    delete[] c;

    return 0;
}
