#include <iostream>
using namespace std;

int* createPointerToLocalVariable() {
    int localVar = 5;
    int* ptr = &localVar; // Tạo con trỏ trỏ tới biến địa phương
    return ptr;
}

int main() {
    int* dynamicPtr = createPointerToLocalVariable();
    /* Lấy con trỏ từ hàm. Giờ chúng ta đang trỏ tới một biến địa phương đã ra khỏi
    phạm vi của nó, khiến con trỏ trở thành không hợp lệ sau khi hàm kết thúc
    Sử dụng con trỏ đến vùng nhớ không hợp lệ có thể dẫn đến hành vi undefined behaviour của chương trình,
    bao gồm crash hoặc dữ liệu rác */

    cout << *dynamicPtr << endl; // Lỗi: truy cập vào vùng nhớ không hợp lệ

    // Giải phóng con trỏ
    delete dynamicPtr;

    return 0;
}

