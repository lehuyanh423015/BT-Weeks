#include <iostream>
#include <ctime>

using namespace std;

struct Guess
{
    int correctNum, guessNum;
    int fauls;

    void init(const int& chooseInt)
    {
        correctNum = chooseInt;
        fauls = 0;
    }

    bool lost()
    {
        return fauls > 7;
    }

    bool won()
    {
        return guessNum == correctNum;
    }

    bool overgame()
    {
        return won() || lost();
    }

    void update(int& input)
    {
        guessNum = input;
        if (guessNum != correctNum)
        {
            fauls ++;
            if (guessNum < correctNum) cout << "Your guess is too small \n";
            else cout << "Your guess is too big \n";
        }
        cout << '\n';
    }
};

void render(Guess& game)
{
    cout << "Fauls: " << game.fauls << '\n';
    if (game.won())
    {
        cout << "You finish this game, correct answer is " << game.correctNum;
        return;
    }
    else
    {
        if (game.lost()) cout << "You lost.";
        return;
    }

}

int getInput()
    {
        int input;
        cout << "Enter your guess: ";
        cin >> input;
        return input;
    }

int main(int argc, char* argv[])
{
    srand(time(0));
    int chooseInt = rand() % 101;
    Guess game;
    game.init(chooseInt);
    render(game);
    do
    {
        int input = getInput();
        game.update(input);
        render(game);
    }
    while(!game.overgame());
    return 0;
}
