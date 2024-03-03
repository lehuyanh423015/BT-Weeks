/*
Chiến lược mà Bob có thể áp dụng là chỉ chọn những thẻ có giá trị cáo hơn 50
Cách thức:
    nếu thẻ Bob xem có giá trị nhỏ hơn 50 -> chọn thẻ còn lại
    nếu thẻ Bob xem có giá trị lớn hơn 50 -> chọn thẻ đã xem
Giải thích: chiến thuật trên đảm bảo cho Bob luôn có khả năng cao chọn đc các thẻ
            có giá trị lớn 50, đồng nghĩa với giá trị có tỉ lệ thắng > 50%
            -> khả năng chiến thắng của Bob > 50%
Code tham khảo:
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int wins = 0;
    int totalGame = 100;
    int knowcard, unKnowCard;
    int selectCard;
    for (int i = 0; i < totalGame; i ++)
    {
        knowcard = rand() % 101;
        unKnowCard = rand() % 101;
        selectCard = (knowcard >= 50) ? knowcard : unKnowCard;
        if (selectCard >= 50) wins ++;
    }
    double winrate = (double)wins / totalGame * 100;
    cout << "Winrate of Bob: " << winrate << '%';
}
