#include<iostream>
using namespace std;
int count_even(int *a, int b)
{
    int ans = 0;
    for (int i = 0; i < b; i++) if (*(a + i) % 2 == 0) ans ++;
    return ans;
}
int main()
{
    int *arr = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << count_even(arr,10);
    delete[] arr;
}
