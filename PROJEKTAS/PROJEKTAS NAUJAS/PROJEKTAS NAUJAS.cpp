
#include <windows.h>
#include <iostream>
#include <mmsystem.h>
#include <string>
#include <chrono>
#include <conio.h>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <ctime>
#include <time.h>
#pragma comment(lib, "Winmm.lib")
using namespace std;
int health = 3, strength = 3;
char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };
string name;
bool isTrue = true;
int lhealth = 1000, attackgl;
bool lesiusDead;

void calcHealth() {
    health++;
}
void calcStrenght() {
    strength++;
}

void seedRand() {
    srand(time(NULL));

}

void start() {

    PlaySound(TEXT("muzika.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);

    string names = "Enter your name:";
    int b = 0;
    while (names[b] != '\0')
    {
        cout << names[b];
   Sleep(100);
        b++;
    };
    std:: cin >> name;

    std::system("cls");

    cout << endl << endl << "                                                                                          Welcome to the Legendary Mountain " << name << endl << endl << endl;

    ifstream input("THE LEGENDARY MOUNTAIN.txt");
    vector<string> main1;
    string amogus;

    while (!input.eof()) {

        getline(input, amogus);
        main1.push_back(amogus);

    }
    for (int i = 0; i < main1.size(); i++) {
        cout << main1[i] << endl;

    }
    cout << endl;

    std::system("pause");

    std::system("cls");

    string hello = "Greetings, traveler!";
    int x = 0;
    while (hello[x] != '\0')
    {
        cout << hello[x];
    Sleep(100);
        x++;
    };
    Sleep(500);

    string next = " I am the magic Simonas and you must be the one and only ";
    int a = 0;
    while (next[a] != '\0')
    {
        cout << next[a];
  Sleep(100);
        a++;

    };

    for (int i = 0; i < name.length(); i++) {
        cout << name[i];
   Sleep(100);
    }
    cout << "!";
    Sleep(500);

    string next1 = " You must be here to climb the Legendary Mountain to save the princess Zygimantina Bobkina. . .";
    int a1 = 0;
    while (next1[a1] != '\0')
    {
        cout << next1[a1];
    Sleep(100);
        a1++;
    };
    cout << endl;
    Sleep(500);
    string next2 = "You will have to defeat great threats in different games of Jackbox, if you wish to do so. Good luck on your quest, traveler!";
    int a2 = 0;
    while (next2[a2] != '\0')
    {
        cout << next2[a2];
    Sleep(100);
        a2++;
    };
    cout << endl;
    std::system("pause");
    std::system("cls");

    ifstream Warrior("Warrior.txt");
    string line;
    for (int i = 0; i < 57; i++) {

        getline(Warrior, line);
        cout << line;
        if (i == 25) {
            cout << "\t \t \t \t  Player stats:";
        }
        if (i == 26) {
            cout << "\t \t \t \t  Health: " << health;
        }
        if (i == 28) {
            cout << "\t \t \t \t \t  Strength: " << strength;
        }
        cout << endl;
    }
    std::system("pause");
    PlaySound(nullptr, nullptr, 0);
}

void coinFlip() {
    PlaySound(TEXT("BF.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);
    int flip, guess;
    seedRand();
    flip = rand() % 2 + 1;
    std::system("cls");

    ifstream Trump_base("Trump base.txt");
    char sako;
    string line, ats;
    string trump1 = "Money Goblin: Hello there, poor thing. May I interest you in a gamble. A coin flip to be exact. We will throw a coin and if you win, I will grant you with +1 of each stat. If you lose, you get the humiliation of a loser.";
    int t1 = 0;
    while (trump1[t1] != '\0')
    {
        cout << trump1[t1];
    Sleep(100);
        t1++;
    };
    cout << endl << endl << endl << "Press Y if you would like to play and press N if not." << endl;
    std::cin >> sako;

    if(sako == 'Y' || sako == 'y') {
        std::system("cls");
        string trump2 = "Alright, time to be destroyed! >:)";
        int t2 = 0;
        while (trump2[t2] != '\0')
        {
            cout << trump2[t2];
     Sleep(100);
            t2++;
        };
        std::system("cls");
        Sleep(500);
    for (int i = 0; i < 68; i++) {

        getline(Trump_base, line);
        cout << line;
        if (i == 1) {
            cout << "\t \t \t Player stats:";
        }
        if (i == 2) {
            cout << "\t \t \t Current health: " << health;
        }
        if (i == 4) {
            cout << "\t \t \t Current strength: " << strength;
        }
        if (i == 10) {
            cout << "\t \t \t Enter 1, if you choose HEADS";
        }
        if (i == 11) {
            cout << "\t \t \t Enter 2, if you choose TAILS";
        }
        if (i == 12) {
            cout << "\t \t \t You chose: ";
        }
        cout << endl;
    }
    Trump_base.close();
    std::cin >> guess;
    if (guess == 1) {
        ats = "HEADS";
    }
    else {
        ats = "TAILS";
    }
    if (flip == guess) {
        ifstream Trump_dead("Trump dead.txt");
        calcHealth();
        calcStrenght();
        std::system("cls");
        for (int i = 0; i < 68; i++) {
            getline(Trump_dead, line);
            cout << line;
            if (i == 1) {
                cout << "\t \t \t Player stats:";
            }
            if (i == 2) {
                cout << "\t \t \t Current health: " << health;
            }
            if (i == 4) {
                cout << "\t \t \t Current strength: " << strength;
            }
            if (i == 10) {
                cout << "\t \t \t Enter 1, if you choose HEADS";
            }
            if (i == 11) {
                cout << "\t \t \t Enter 2, if you choose TAILS";
            }
            if (i == 12) {
                cout << "\t \t \t You chose: " << ats;
            }
            if (i == 20) {
                cout << "\t \t \t How could this be??? How could you win against Trump?!?!? ";

            }
            cout << endl;
        }
    }
    else {
        ifstream Trump_won("Trump won.txt");
        std::system("cls");
        for (int i = 0; i < 69; i++) {
            getline(Trump_won, line);
            cout << line;
            if (i == 1) {
                cout << "\t \t \t Player stats:";
            }
            if (i == 2) {
                cout << "\t \t \t Current health: " << health;
            }
            if (i == 4) {
                cout << "\t \t \t Current strength: " << strength;
            }
            if (i == 10) {
                cout << "\t \t \t Enter 1, if you choose HEADS";
            }
            if (i == 11) {
                cout << "\t \t \t Enter 2, if you choose TAILS";
            }
            if (i == 12) {
                cout << "\t \t \t You chose: " << ats;
            }
            if (i == 20) {
                cout << "\t \t \t You lost against the all mighty Trump! ";
            }
            cout << endl;
        }
    }
}
    else {
        std::system("cls");
    string trump3 = " What a loser! >:(";
    int t3 = 0;
    while (trump3[t3] != '\0')
    {
        cout << trump3[t3];
     Sleep(100);
        t3++;
    }
    cout << endl;
         }
         std::system("pause");
         PlaySound(nullptr, nullptr, 0);
         std::system("cls");
         PlaySound(TEXT("MAIN THEME 2.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);
         string wiz = "Great work on your first boss, traveler, good luck with what's to come";
         int w = 0;
         while (wiz[w] != '\0')
         {
             cout << wiz[w];
       Sleep(100);
             w++;
         }
         cout << endl <<" Health: " << health<< endl;
         cout << " Strength: " << strength << endl;
         std::system("pause");
         PlaySound(nullptr, nullptr, 0);
}

void rockPaperScissors() {

    int ans, wincheck;
    int guess = -1;
    char temp;
    string botuko, mano, line;
    seedRand();
    ans = (rand() % 3) + 1;
    std::system("cls");
    ifstream Ye_Base("Ye base.txt");
    char sako2;
    string line1, ats;
    PlaySound(TEXT("BF2.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);
    string kanye1 = "Suspicious Dwarf: Stop! Let's play a game of Rock Paper Scissors.";
    int k1 = 0;
    while (kanye1[k1] != '\0')
    {
        cout << kanye1[k1];
     Sleep(100);
        k1++;
    };
    cout << endl << endl << endl << "Press Y if you would like to play and press N if not." << endl;
    cin >> sako2;
    if (sako2 == 'Y' || sako2 == 'y') {
        std::system("cls");
        string kanye2 = "I know I got angels watchin me from the other side.";
        int k2 = 0;
        while (kanye2[k2] != '\0')
        {
            cout << kanye2[k2];
         Sleep(100);
            k2++;
        };
        std::system("cls");
        Sleep(500);
        for (int i = 0; i < 54; i++) {
            getline(Ye_Base, line1);
            cout << line1;
            if (i == 1) {
                cout << "\t \t \t Player stats:";
            }
            if (i == 2) {
                cout << "\t \t \t Current health: " << health;
            }
            if (i == 4) {
                cout << "\t \t \t Current strength: " << strength;
            }
            if (i == 10) {
                cout << "\t \t \t \t \t ROCK PAPER SCISSORS";
            }
            if (i == 12) {
                cout << "\t \t \t What do you choose? (R / P / S): ";
            }
            if (i == 13) {
                cout << "\t \t \t You chose: ";
            }
            cout << endl;
        }

        std::cin >> temp;
        if (temp == 'R' || temp == 'r') {
            guess = 1;
            mano = "Rock";

        }
        else if (temp == 'P' || temp == 'p') {
            guess = 2;
            mano = "Paper";

        }
        else if (temp == 'S' || temp == 's') {
            guess = 3;
            mano = "Scissors";

        }
        else {
            guess = 1;
            mano = "Rock";
        }

        if (ans == 1) botuko = "Rock";
        else if (ans == 2) botuko = "Paper";
        else botuko = "Scissors";

        if ((ans == 1 && guess == 2) || (ans == 2 && guess == 3) || (ans == 3 && guess == 1)) {
            wincheck = 1;
        }
        else if ((ans == 1 && guess == 3) || (ans == 2 && guess == 1) || (ans == 3 && guess == 2)) {
            wincheck = 2;
        }
        else {
            wincheck = 3;
        }
        if (wincheck == 1) {
            std::system("cls");
            ifstream Ye_dead("Ye dead.txt");
            calcHealth();
            calcHealth();
            calcStrenght();
            calcStrenght();
            for (int i = 0; i < 54; i++) {
                getline(Ye_dead, line1);
                cout << line1;
                if (i == 1) {
                    cout << "\t \t \t Player stats:";
                }
                if (i == 2) {
                    cout << "\t \t \t Current health: " << health;
                }
                if (i == 4) {
                    cout << "\t \t \t Current strength: " << strength;
                }
                if (i == 10) {
                    cout << "\t \t \t \t \t ROCK PAPER SCISSORS";
                }
                if (i == 12) {
                    cout << "\t \t \t What do you choose? (R / P / S): ";
                }
                if (i == 13) {
                    cout << "\t \t \t You chose: " << mano;
                }
                if (i == 14) {
                    cout << "\t \t \t Kanye chose: " << botuko;
                }
                if (i == 20) {
                    cout << "\t \t \t You have won against Kanye! ";
                }
                cout << endl;
            }

        }
        if (wincheck == 2) {
            std::system("cls");
            ifstream Ye_won("Ye won.txt");
            for (int i = 0; i < 54; i++) {
                getline(Ye_won, line1);
                cout << line1;
                if (i == 1) {
                    cout << "\t \t \t Player stats:";
                }
                if (i == 2) {
                    cout << "\t \t \t Current health: " << health;
                }
                if (i == 4) {
                    cout << "\t \t \t Current strength: " << strength;
                }
                if (i == 10) {
                    cout << "\t \t \t \t \t ROCK PAPER SCISSORS";
                }
                if (i == 12) {
                    cout << "\t \t \t What do you choose? (R / P / S): ";
                }
                if (i == 13) {
                    cout << "\t \t \t You chose: " << mano;
                }
                if (i == 14) {
                    cout << "\t \t \t Kanye chose: " << botuko;
                }
                if (i == 20) {
                    cout << "\t \t \t Kanye won! ";
                }
                cout << endl;
            }
        }
        if (wincheck == 3) {
            std::system("cls");
            ifstream Ye_base2("Ye base.txt");
            calcHealth();
            calcStrenght();
            for (int i = 0; i < 54; i++) {
                getline(Ye_base2, line1);
                cout << line1;
                if (i == 1) {
                    cout << "\t \t \t Player stats:";
                }
                if (i == 2) {
                    cout << "\t \t \t Current health: " << health;
                }
                if (i == 4) {
                    cout << "\t \t \t Current strength: " << strength;
                }
                if (i == 10) {
                    cout << "\t \t \t \t \t ROCK PAPER SCISSORS";
                }
                if (i == 12) {
                    cout << "\t \t \t What do you choose? (R / P / S): ";
                }
                if (i == 13) {
                    cout << "\t \t \t You chose: " << mano;
                }
                if (i == 14) {
                    cout << "\t \t \t Kanye chose: " << botuko;
                }
                if (i == 20) {
                    cout << "\t \t \t It is a draw! ";
                }
                cout << endl;
            }
        }
    }
    else{
        system("cls");
        string kanye3 = "I am the number one human being. That means any person that's living or breathing is number two.";
        int k3 = 0;
        while (kanye3[k3] != '\0')
        {
            cout << kanye3[k3];
            Sleep(100);
            k3++;
        }
}
cout << endl;
    system("pause");
    system("cls");
    PlaySound(nullptr, nullptr, 0);

    PlaySound(TEXT("MAIN THEME 2.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);
    string wiz = "Great work on your second boss, you're half way to the top! Your next opponent shall be a fat beast and you must beat it at a game of tic tac toe. Good luck traveler!";
    int w = 0;
    while (wiz[w] != '\0')
{
    cout << wiz[w];
    Sleep(100);
    w++;
}
    cout << endl << " Health: " << health << endl;
    cout << " Strength: " << strength << endl;

     system("pause");
     system("cls");
     PlaySound(nullptr, nullptr, 0);
}

int checkwin() {
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
        && square[4] != '4' && square[5] != '5' && square[6] != '6'
        && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
    PlaySound(nullptr, nullptr, 0);
    system("pause");
    system("cls");
}

void board() {
    system("cls");
    string line;
    ifstream gorlock_base("gorlock base.txt");
    for (int i = 0; i < 46; i++) {
        getline(gorlock_base, line);
        cout << line;
        if (i == 1) {
            cout << "\t \t \t Player stats:";
        }
        if (i == 2) {
            cout << "\t \t \t Current health: " << health;
        }
        if (i == 4) {
            cout << "\t \t \t Current strength: " << strength;
        }
        if (i == 8) {
            cout << "\t \t \t \t Tic Tac Toe";
        }
        if (i == 10) {
            cout << "\t \t \t" << name << " (X) - Gorlock The Destroyer (O)";
        }
        if (i == 11) {
            cout << "\t \t Enter a number where you wish to put X";
        }
        if (i == 13) {
            cout << "\t \t \t \t     |     |     ";
        }
        if (i == 14) {
            cout << "\t \t \t \t  " << square[1] << "  |  " << square[2] << "  |  " << square[3];
        }
        if (i == 15) {
            cout << "\t \t \t \t_____|_____|_____";
        }
        if (i == 16) {
            cout << "\t \t \t \t     |     |     ";
        }
        if (i == 17) {
            cout << "\t \t \t \t  " << square[4] << "  |  " << square[5] << "  |  " << square[6];
        }
        if (i == 18) {
            cout << "\t \t \t \t_____|_____|_____";
        }
        if (i == 19) {
            cout << "\t \t \t \t     |     |     ";
        }
        if (i == 20) {
            cout << "\t \t \t \t  " << square[7] << "  |  " << square[8] << "  |  " << square[9];
        }
        if (i == 21) {
            cout << "\t \t \t \t     |     |     ";
        }
        cout << endl;
    }

}

int TicTacToe() {
    PlaySound(TEXT("badbitch.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);
    Sleep(3500);
    PlaySound(TEXT("badbitch2.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);
    int player = 1, i, choice;
    char mark;
    do {
        board();
        player = (player % 2) ? 1 : 2;

        if (player % 2 != 0) {
            std::cin >> choice;
        }

        else {
            seedRand();
            choice = (rand() % 9) + 1;

            for (int q = 0; q < 9; q++) {
                if (square[choice] == 'X' || 'O') {
                    choice++;
                    if (choice > 9) {
                        choice = 1;
                    }
                }
                else {
                    break;
                }
            }
        }

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else {

            player--;
            if (player % 2 == 0) {
                cout << "Can't do that " << choice << endl;
                std::cin.ignore();
                std::cin.get();
            }
        }
        i = checkwin();

        player++;
    } while (i == -1);
    board();
    if (i == 1 && player % 2 != 0) {
        system("cls");
        string line;
        ifstream gorlock_won("gorlock hit.txt");
        for (int i = 0; i < 46; i++) {
            getline(gorlock_won, line);
            cout << line;
            if (i == 1) {
                cout << "\t \t \t Player stats:";
            }
            if (i == 2) {
                cout << "\t \t \t Current health: " << health;
            }
            if (i == 4) {
                cout << "\t \t \t Current strength: " << strength;
            }
            if (i == 8) {
                cout << "\t \t \t \t Tic Tac Toe";
            }
            if (i == 10) {
                cout << "\t \t \t" << name << " (X) - Garlock The Destroyer (O)";
            }
            if (i == 11) {
                cout << "\t \t Enter a number where you wish to place X";
            }
            if (i == 13) {
                cout << "\t \t \t \t     |     |     ";
            }
            if (i == 14) {
                cout << "\t \t \t \t  " << square[1] << "  |  " << square[2] << "  |  " << square[3];
            }
            if (i == 15) {
                cout << "\t \t \t \t_____|_____|_____";
            }
            if (i == 16) {
                cout << "\t \t \t \t     |     |     ";
            }
            if (i == 17) {
                cout << "\t \t \t \t  " << square[4] << "  |  " << square[5] << "  |  " << square[6];
            }
            if (i == 18) {
                cout << "\t \t \t \t_____|_____|_____";
            }
            if (i == 19) {
                cout << "\t \t \t \t     |     |     ";
            }
            if (i == 20) {
                cout << "\t \t \t \t  " << square[7] << "  |  " << square[8] << "  |  " << square[9];
            }
            if (i == 21) {
                cout << "\t \t \t \t     |     |     ";
            }
            if (i == 30) {
                cout << "\t \t \t \t You got pounced on by the beast!!";
            }
            cout << endl;
        }
        system("pause");
        cout << endl << " Health: " << health << endl;
        cout << " Strength: " << strength << endl;
        system("pause");
        system("cls");
    }

    else if (i == 1 && player % 2 == 0) {
        system("cls");
        string line;
        ifstream gorlock_dead("gorlock dead.txt");
        calcStrenght();
        calcStrenght();
        calcHealth();
        calcHealth();
        calcHealth();
        for (int i = 0; i < 46; i++) {
            getline(gorlock_dead, line);
            cout << line;
            if (i == 1) {
                cout << "\t \t \t Player stats:";
            }
            if (i == 2) {
                cout << "\t \t \t Current health: " << health;
            }
            if (i == 4) {
                cout << "\t \t \t Current strength: " << strength;
            }
            if (i == 8) {
                cout << "\t \t \t \t Tic Tac Toe";
            }
            if (i == 10) {
                cout << "\t \t \t" << name << " (X) - Garlock The Destroyer (O)";
            }
            if (i == 11) {
                cout << "\t \t Enter a number where you wish to place X";
            }
            if (i == 13) {
                cout << "\t \t \t \t     |     |     ";
            }
            if (i == 14) {
                cout << "\t \t \t \t  " << square[1] << "  |  " << square[2] << "  |  " << square[3];
            }
            if (i == 15) {
                cout << "\t \t \t \t_____|_____|_____";
            }
            if (i == 16) {
                cout << "\t \t \t \t     |     |     ";
            }
            if (i == 17) {
                cout << "\t \t \t \t  " << square[4] << "  |  " << square[5] << "  |  " << square[6];
            }
            if (i == 18) {
                cout << "\t \t \t \t_____|_____|_____";
            }
            if (i == 19) {
                cout << "\t \t \t \t     |     |     ";
            }
            if (i == 20) {
                cout << "\t \t \t \t  " << square[7] << "  |  " << square[8] << "  |  " << square[9];
            }
            if (i == 21) {
                cout << "\t \t \t \t     |     |     ";
            }
            if (i == 30) {
                cout << "\t \t \t \t HOW DID YOU WIN?!?!?!?!??!";
            }

            cout << endl;
        }

    }
    else {
        system("cls");
        string line;
        ifstream gorlock_base2("gorlock base.txt");
        getline(gorlock_base2, line);
        cout << line;
        if (i == 1) {
            cout << "\t \t \t Player stats:";
        }
        if (i == 2) {
            cout << "\t \t \t Current health: " << health;
        }
        if (i == 4) {
            cout << "\t \t \t Current strength: " << strength;
        }
        if (i == 8) {
            cout << "\t \t \t \t Tic Tac Toe";
        }
        if (i == 10) {
            cout << "\t \t \t" << name << " (X) - Garlock The Destroyer (O)";
        }
        if (i == 11) {
            cout << "\t \t Enter a number where you wish to place X";
        }
        if (i == 13) {
            cout << "\t \t \t \t     |     |     ";
        }
        if (i == 14) {
            cout << "\t \t \t \t  " << square[1] << "  |  " << square[2] << "  |  " << square[3];
        }
        if (i == 15) {
            cout << "\t \t \t \t_____|_____|_____";
        }
        if (i == 16) {
            cout << "\t \t \t \t     |     |     ";
        }
        if (i == 17) {
            cout << "\t \t \t \t  " << square[4] << "  |  " << square[5] << "  |  " << square[6];
        }
        if (i == 18) {
            cout << "\t \t \t \t_____|_____|_____";
        }
        if (i == 19) {
            cout << "\t \t \t \t     |     |     ";
        }
        if (i == 20) {
            cout << "\t \t \t \t  " << square[7] << "  |  " << square[8] << "  |  " << square[9];
        }
        if (i == 21) {
            cout << "\t \t \t \t     |     |     ";
        }
        cout << endl;
    }

    std::cin.ignore();
    std::cin.get();
    return 0;
}


void Wizard() {
    system("cls");
    PlaySound(TEXT("MAIN THEME 2.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);
    string wiz1 = "You are at the top traveler! Only one more boss to defeat!";
    int w1 = 0;
    while (wiz1[w1] != '\0')
    {
        cout << wiz1[w1];
        Sleep(100);
        w1++;
    }
    cout << endl << " Health: " << health << endl;
    cout << " Strength: " << strength << endl;

    system("pause");
    system("cls");
    PlaySound(nullptr, nullptr, 0);
}


void Music() {
    std::system("cls");

    PlaySound(TEXT("LF.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);
    string les = "Sveiki sveiki! Seems you have reached the top, now you must face me, mighty Lescinskas. You cant skip me. Depending on your experience you will have an easier time against me. Lets get started >:)";
    int l = 0;
    while (les[l] != '\0')
    {
        cout << les[l];
        Sleep(100);
        l++;
    }
}

void lastBoss() {
    string line;
    int attack, preattack, predefense;
    char choice;
    ifstream Lesius_base("Lesius base.txt");
    seedRand();
    attack = rand() % 4 + 1;
    attackgl = attack;
    system("cls");
    for (int i = 0; i < 54; i++) {

        getline(Lesius_base, line);
        cout << line;
        if (i == 1) {
            cout << "\t \t \t Player stats:";
        }
        if (i == 2) {
            cout << "\t \t \t Current health: " << health;
        }
        if (i == 4) {
            cout << "\t \t \t Current strength: " << strength;
        }
        if (i == 12) {
            cout << "\t \t \t Lesius health: " << lhealth;
        }
        if (i == 13) {
            cout << "\t \t \t Lesius incoming attack: " << attack;
        }
        if (i == 15) {
            cout << "\t \t \t Press A to attack back, press D to defend";
        }
        cout << endl;
    }
    cin >> choice;

    if (choice == 'a' || choice == 'A') {
        seedRand();
        preattack = rand() % 30 + 30 * strength;
        lhealth -= preattack;
        health = health - attack;

    }
    else if (choice == 'd' || choice == 'D') {

        if (attack == 1 || attack == 2 || attack == 3) {
            health -= 1;
        }
        else {
            health -= 2;
        }
    }
    Lesius_base.close();
    Lesius_base.open("Lesius base.txt");

    if (lhealth <= 0) {
        isTrue = false;
    }
    else if (health <= 0) {
        isTrue = false;
    }

}
void Lescinskas() {

    string line, line2;

    while (isTrue == true) {
        lastBoss();
    }

    if (lhealth <= 0) {
        ifstream Lesius_dead("Lesius dead.txt");
        system("cls");
        lesiusDead = true;
        for (int i = 0; i < 53; i++) {
            getline(Lesius_dead, line);
            cout << line;
            if (i == 1) {
                cout << "\t \t \t Player stats:";
            }
            if (i == 2) {
                cout << "\t \t \t Current health: " << health;
            }
            if (i == 4) {
                cout << "\t \t \t Current strength: " << strength;
            }
            if (i == 12) {
                cout << "\t \t \t Lesius health: 0";
            }
            if (i == 13) {
                cout << "\t \t \t Lesius incoming attack: " << attackgl;
            }
            if (i == 15) {
                cout << "\t \t \t Press A to attack back, press D to defend";
            }
            if (i == 20) {
                cout << "\t \t \t CONGRATULATIONS!!! YOU DEFEATED THE ALL MIGHTY LESCINSKAS!!!";
            }
            cout << endl;
        }
        system("pause");
    }
    else if (health <= 0) {
        ifstream Lesius_won("Lesius won.txt");
        system("cls");
        lesiusDead = false;
        for (int i = 0; i < 53; i++) {
            getline(Lesius_won, line2);
            cout << line2;
            if (i == 1) {
                cout << "\t \t \t Player stats:";
            }
            if (i == 2) {
                cout << "\t \t \t Current health: 0";
            }
            if (i == 4) {
                cout << "\t \t \t Current strength: " << strength;
            }
            if (i == 12) {
                cout << "\t \t \t Lesius health: " << lhealth;
            }
            if (i == 13) {
                cout << "\t \t \t Lesius incoming attack: " << attackgl;
            }
            if (i == 15) {
                cout << "\t \t \t Press A to attack back, press D to defend";
            }
            if (i == 20) {
                cout << "\t \t \t What a shame... Always knew I was better than you.";
            }
            cout << endl;
        }
    }
    system("pause");
}

void Ending1() {
    PlaySound(TEXT("LAST SCENE.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);
    system("cls");
    string end = "After days of climbing you finally reach it... The top of the mountain. There sits the beautiful princess Zygimantina waiting for you to come.";

    int e = 0;
    while (end[e] != '\0')
    {
        cout << end[e];
        Sleep(100);
        e++;
    }
    cout << endl << endl;
    system("pause");
    system("cls");
    string line5;
    ifstream zygis("Zygis.txt");
    for (int i = 0; i < 46; i++) {
        getline(zygis, line5);
        cout << line5;
        if (i == 4) {
            cout << "\t \t \tYou finally came, my hero,"<<name;
            }
        if (i == 5) {
            cout << "\t \t \tI always knew you were worthy of my love!";
        }
        if (i == 7) {
            cout << "\t \t \tYou take the princess into your arms you lean in and kiss";
        }
        if (i == 8) {
            cout << "\t \t \tShe looks at you with grace and you wander off into the sunset" << name;
        }
        cout << endl;
        }

        cout << endl;
        system("pause");
        system("cls");
        Sleep(1000);
        string end1 = "Thank you for playing Legendary Mountain ir this better be a ten ;)";
        cout << endl << endl;

        int e1 = 0;
        while (end1[e1] != '\0')
        {
            cout << end1[e1];
            Sleep(100);
            e1++;
        }
        system("pause");
        PlaySound(nullptr, nullptr, 0);
    }

void Ending2() {
    PlaySound(TEXT("LAST SCENE.wav"), NULL, SND_FILENAME | SND_SYNC | SND_ASYNC);
    system("cls");
    string end = "You weren't able to defeat the all mighty Lescinskas, so you walk down the mountain with regret of ever challenging yourself";

    int e = 0;
    while (end[e] != '\0')
    {
        cout << end[e];
        Sleep(100);
        e++;
    }
    cout << endl << endl;
    system("pause");
    system("cls");
    string line6;
    ifstream zygis1("Zygis1.txt");
    for (int i = 0; i < 46; i++) {
        getline(zygis1, line6);
        cout << line6;
        if (i == 4) {
            cout << "\t \t \tWhere is my hero? Where is " <<name<<" ?";
        }
        if (i == 5) {
            cout << "\t \t \tDid he not come for me?";
        }
        if (i == 7) {
            cout << "\t \t \tZygimantina Bobkina sobs and wishes that her hero had saved her";
        }
        if (i == 8) {
            cout << "\t \t \tBut he won't be showing up..." << name;
        }
        cout << endl;
    }

    cout << endl;
    system("pause");
    system("cls");
    Sleep(1000);
    string end1 = "Thank you for playing Legendary Mountain and this better be a ten ;)";
    cout << endl << endl;

    int e1 = 0;
    while (end1[e1] != '\0')
    {
        cout << end1[e1];
        Sleep(100);
        e1++;
    }
    system("pause");
    PlaySound(nullptr, nullptr, 0);
}

int main() {

    start();
    coinFlip();
    TicTacToe();
    Wizard();
    Music();
    Lescinskas();
    if(lesiusDead){
        Ending1();
    }
    else{
        Ending2();
    }

