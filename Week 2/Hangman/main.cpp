#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "defs.h"
#include "graphics.h"
#include <ctime>

using namespace std;
struct Hangman
{
    string secretWord;
    string nowWord;
    int fauls;
    int status = -1;
    int hidden;

    void init(const string& key)
    {
        secretWord = key;
        nowWord = string(secretWord.size(), '_');
        fauls = 0;
        hidden = nowWord.size();
    }

    void update(char input)
    {
        status = 0;
        for (int i = 0; i < secretWord.size(); i++)
        {
            if (nowWord[i] == '_' && input == secretWord[i])
            {
                nowWord[i] = input;
                hidden --;
                status = 1;
            }
        }
        if (status == 0)
        {
            fauls ++;
            cout << "Maybe you should think more carefully:vv \n\n";
        }
        else cout <<"We're almost at the finish of game, come on:33 \n\n";
    }

    bool won()
    {
        return hidden <= 0;
    }

    bool lost()
    {
        return fauls > 6;
    }

    bool isOver()
    {
        return won() || lost() ;
    }
};

const string word_list[] = {"dog", "cat", "frog", "lovely"};
const int count = sizeof(word_list) / sizeof(string);
const string& chooseWord()
{
    return word_list[rand() % count];
}
void render(Hangman &game)
{
    cout << "Fauls: " << game.fauls << '\n';
    cout << "Now: " << game.nowWord << '\n';
    if (game.won()) cout << "You won!";
    else if (game.lost()) cout << "You lost!";
}

char getInput()
{
    string input;
    cout << "Enter a character: ";
    cin >> input;
    return input[0];
}

int main(int argc, char* argv[])
{
    srand(time(0));
    Hangman game;
    game.init(chooseWord());
    render(game);
    do
    {
        char input = getInput();
        game.update(input);
        render(game);
    }
    while (!game.isOver());
    return 0;
}
