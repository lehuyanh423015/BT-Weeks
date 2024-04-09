#include<bits/stdc++.h>
using namespace std;

string so[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
string chat[4] = {"bich", "nhep", "ro", "co"};

string inQuanBai(int khoa) {
    string s = so[khoa % 13] + ' ' + chat[khoa % 4];
    return s;
}

bool uuTienHon(int khoa1, int khoa2) {
    if (khoa1 > khoa2) return true;
    return false;
}

void traoBai(int* boBai) {
    int n = 52;
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = boBai[i];
        boBai[i] = boBai[j];
        boBai[j] = temp;
    }
}

void chiaBai(int *boBai, int **boBaiNguoiChoi) {
    for (int i = 0; i < 52; i++) {
        boBaiNguoiChoi[i % 4][i / 4] = boBai[i];
    }
}

void inBoBaiNguoiChoi(int *boBaiNguoiChoi) {
    cout << '\t';
    for (int j = 0; j < 13; j++) cout << setw(2) << boBaiNguoiChoi[j] << ' ';
    cout << '\n';
}

int aiCo2Bich(int *boBaiNguoiChoi) {
    for (int j = 0; j < 13; j++)
        if (boBaiNguoiChoi[j] == 0) return i;
    return -1;
}

int chonBai(int *boBaiNguoiChoi) {
    do {
        int x = rand() % 13;
    }
    while (boBaiNguoiChoi[x] == -1);
    return x;
}

void choiBai(int *boBaiNguoiChoi, int quanBaiVuaChoi) {
    do {
        int x = chonBai(boBaiNguoiChoi)
        int quanBaiVuaChon = boBaiNguoiChoi[x];
    }
    while (! uuTienHon(quanBaiVuaChon, quanBaiVuaChoi));
}

void loaiNguoiChoi(int* boBaiNguoiChoi, int& quanBaiVuaChoi, int quanBaiVuaChon) {

}

int nguoiChoiTiepTheo(int*, int, int) {

}

bool chuaAiHetBai(int **boBaiNguoiChoi) {
    for (int i = 0; i < 4; i++) {
        int d = 0;
        for (int j = 0; j < 13; j++)
            if (boBaiNguoiChoi[i][j] == -1) d++;
            else return false;
        if (d == 13) return true;
    }
    return false;
}

bool tieptuc(int arr[]) {
    return arr[0] < 100 && arr[1] < 100 && arr[2] < 100 && arr[3] < 100;
}

int main() {
    srand(time(0));
    int* boBai = new int[52];
    for (int i = 0; i < 52; i ++) boBai[i] = i;
    int ** boBaiNguoiChoi = new int*[4];
    for (int i = 0; i < 4; i++) {
        boBaiNguoiChoi[i] = new int[13];
    }
    int diem[4] = {0};
    int quanBaiVuaChoi, quanBaiVuaChon;
    int nguoichoi;
    int van = 1;

    while (tieptuc(diem)) {
        traoBai(boBai);
        chiaBai(boBai, boBaiNguoiChoi);
        cout << "Van choi thu: " << van << '\n';

        nguoichoi = aiCo2Bich(boBaiNguoiChoi) + 1
        cout << "Nguoi choi dau tien cua van: Nguoi choi " << nguoichoi;
        for (int i = 0; i < 4; i++) {
            cout << "Cac quan bai hien tai cua nguoi choi " << i+1 << " :\n";
            inBoBaiNguoiChoi(boBaiNguoiChoi[i]);
        }
        cout << "Quan bai vua choi la: " << inQuanBai(quanBaiVuaChoi) << '\n';

    }
}
