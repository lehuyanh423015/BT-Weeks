#include <bits/stdc++.h>
using namespace std;
double x;
int main()
{
    srand(time(0)); // Khởi tạo seed cho hàm random

    int wins = 0;
    int totalGames = 10000;

    for (int i = 0; i < totalGames; i++) {
        int card1 = rand() % 101; // Sinh số ngẫu nhiên từ 0 đến 100
        int card2 = rand() % 101;

        int chosenCard = (card1 > card2) ? card1 : card2; // Chọn thẻ có giá trị lớn hơn

        if (chosenCard > 50) {
            wins++;
        }
    }

    double winRate = (double)wins / totalGames * 100;
    std::cout << "Win rate: " << winRate << "%" << std::endl;
}
