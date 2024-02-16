#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <random>
using namespace std;

// function for player's samurai choice
string line = "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";

void displayIntro()
{
    cout << "To become a samurai" << endl << endl;
    cout << "Choose your side:" << endl;
    cout << "Press 1 for the dark side (HP: 4, Strength: 6)" << endl;
    cout << "Press 2 for the light side (HP: 8, Strength: 3)" << endl;
    cout << "Which side will choose? ";

}

int enemyChoice()
{
    random_device randomNum;
    uniform_int_distribution<int> randomInt(1, 4);

    int enemyChoice = randomInt(randomNum);

    return enemyChoice;
}

void battleStats(int energy, int healthPotion)
{
    cout << "Your stats:" << endl;
    cout << "1. Attack" << " (" << energy << " energy remaining)" << endl;
    cout << "2. Defend" << endl;
    cout << "3. Heal" << " (" << healthPotion << " health potion(s) left)" << endl;
    cout << "4. Rest" << endl;
    cout << "\nCHOOSE YOUR OPTION:" << endl;
}

void levelOne(int samurai, int energy, int healthPotion)
{
    string tutorial0 = "Each battle will last 4 rounds";
    string tutorial1 = "You have 4 options: attack, defend, heal and rest."; 
    string tutorial2 = "If you attack and the enemy defends, then you will receive backlash damage and vice-versa.";
    string tutorial3 = "If you both attack, defend or heal neither will take or give damage.";
    string tutorial4 = "If you are healing while the other is attacking, you get full damage ";
    string tutorial5 = "If you rest, you will get energy back, but you're risking getting attacked.";

    switch (samurai)
    {
    case 1:
        cout << "You encounter a samurai student training in a forest, you see how much potential he has, so you decide to kill him." << endl;
        cout << "You approach the student and he can sense your anger, a fight starts!" << endl << endl;
        cout << line << endl << tutorial0 << endl << tutorial1 << endl << tutorial2 << endl << tutorial3 
             << endl << tutorial4 << endl << tutorial5 << endl << line << endl << endl;
        battleStats(energy, healthPotion);
        break;

    case 2:
        cout << "A fiery skeleton is approaching you";
        break;
    }
}

void samuraiChoice(int samurai)
{

    while (samurai != 1 || samurai != 2)
    {
        if (samurai == 1)
        {
            cout << endl
                 << "YOU HAVE CHOSEN TO BE THE ... DARK SAMURAI!" << endl;
            break;
        }
        else if (samurai == 2)
        {
            cout << endl
                 << "YOU HAVE CHOSEN TO BE THE ... LIGHT SAMURAI!" << endl;
            break;
        }
        else if (samurai == 0)
        {
            cout << "QUITING GAME..." << endl;
            exit(0);
        }
        else
        {
            cout << "INCORRECT SELECTION. Please choose '1' for RED SAMURAI or '2' for BLUE SAMURAI:  ";
        }
        cin >> samurai;
    }
}

// function for combat menu

int main()
{

    // variables
    int battleChoices;
    int samurai;

    int health = 0;
    int strength = 0;
    int energy = 0;
    int healthPotion = 0;

    displayIntro();

    cout << endl;
    cout << "Press 0 to QUIT " << endl;

    cin >> samurai;
    samuraiChoice(samurai);
    cout << line << endl << endl;

    // prepping hp & strength with choices
    if (samurai == 1)
    {
        health += 4;
        strength += 6;
        energy += 15;
        healthPotion++;
    }

    if (samurai == 2)
    {
        health += 8;
        strength += 3;
        energy += 20;
        healthPotion++;
    }

    cout << "Your starting HP is: " << health << endl;
    cout << "Your starting strength is: " << strength << endl;
    cout << "Your starting enerygy is: " << energy << endl;
    cout << line << endl << endl;
    
    cout << line << endl << endl;
    cout << "LEVEL ONE ... BEGIN!" << endl;

    levelOne(samurai, energy, healthPotion);

    return 0;
}
