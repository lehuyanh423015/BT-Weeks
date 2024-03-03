#include <iostream>
#include <ctime>

using namespace std;

struct Guess
{
    int correctNum, guessNum;
    int fauls;
    string suggest[2];
    int minn, maxn;

    void init(const int& pickNum)
    {
        correctNum = pickNum;
        fauls = 0;
        suggest[0] = "You should try with bigger one \n";
        suggest[1] = "you should try with smaller one \n";
        minn = 0;
        maxn = 100;
    }

    void getGuess()
    {
        cout << "Show your guess: ";
        guessNum = minn + rand() % (maxn - minn + 1);
        cout << guessNum << '\n';
    }

    void update ()
    {
        if (guessNum != correctNum)
        {
            fauls ++;
            if (guessNum < correctNum)
            {
                cout << suggest[0];
                minn = guessNum + 1;
            }
            else
            {
                cout << suggest[1];
                maxn = guessNum - 1;
            }
            cout <<  '\n';
        }
    }

    bool lost()
    {
        return fauls > 10;
    }
    bool won()
    {
        return guessNum == correctNum;
    }
    bool gameover()
    {
        return won() || lost();
    }
};

void render(Guess& game)
{
    cout << "Your fauls: " << game.fauls << '\n';
    if (game.won())
    {
        cout << "You're so good, this game have finished, \n";
        cout << "Correct answer is: " << game.correctNum << '\n';
    }
    else if (game.lost())
    {
        cout << "Unlucky, Let's try it carefully in other game.";
        cout << "Correct answer is: " << game.correctNum << '\n';
    }
}

int main(int argc, char* argv[])
{
    srand(time(0));
    Guess game;
    int pickNum = rand() % 101;
    game.init(pickNum);
    char ch;
    render(game);
    do
    {
        cout << "Do you want to continue this game? \n";
        cout << "Enter Y to continue, N to stop. \n";
        cout << "Your choice: "; cin >> ch;
        if (ch == 'Y')
        {
            cout << '\n';
            game.getGuess();
            game.update();
            render(game);
        }
        else
        {
            cout << "You can't finish this game.";
            break;
        }
    }
    while (!game.gameover());
    return 0;
}
