#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    char *str1 = argv[1];
    char *str2 = argv[2];

    int count = 0;
    char *ptr = str2;

    while ((ptr = strstr(ptr, str1)) != NULL) {
        count++;
        ptr += strlen(str1);
    }

    cout << count ;

    return 0;
}
