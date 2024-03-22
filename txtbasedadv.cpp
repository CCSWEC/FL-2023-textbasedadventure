#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <random>
using namespace std;

// function for player's samurai choice

int enemyChoice()
{
    random_device randomNum;
    uniform_int_distribution<int> randomInt(1, 4);

    int enemyChoice = randomInt(randomNum);
}

void battleOutput()
{
    cout << "1. Attack" << endl;
    cout << "2. Defend" << endl;
    cout << "3. Heal" << endl;
}

void levelOne(int samurai)
{
    switch (samurai)
    {
    case 0:
        cout << "You encounter a samurai student training in a forest, you see how much potential he has, so you decide to kill him." << endl;
        cout << "You approach the student and he can sense your anger, a fight starts!" << endl
             << endl;
        battleOutput();
        break;

    case 1:
        cout << "A fiery skeleton is approaching you";
        break;
    }
}

// function for player's samurai choice
void samuraiChoice(int samurai)
{
    if (samurai == 0)
    {
        cout << endl
                << "YOU HAVE CHOSEN TO BE THE ... DARK SAMURAI!" << endl;
    }
    else if (samurai == 1)
    {
        cout << endl
                << "YOU HAVE CHOSEN TO BE THE ... LIGHT SAMURAI!" << endl;
    }
    else if (samurai == 2)
    {
        cout << "QUITING GAME..." << endl;
        exit(0);
    }
    else
    {
        cout << "INCORRECT SELECTION. Please choose '1' for RED SAMURAI or '2' for BLUE SAMURAI:  ";
    }
}

int main()
{

    // variables
    int battleChoices;
    int samurai;

    int health = 0;
    int strength = 0;
    int energy = 0;

    // main menu section
    cout << "********************************************************************" << endl;
    cout << "TO BECOME A SAMURAI" << endl;

    cout << "********************************************************************" << endl;
    cout << "C++ Adventure Text-Based Game" << endl;
    cout << "Created by Collin County Community College's Software Development Club" << endl;
    cout << "********************************************************************" << endl;

    cout << endl
         << endl;

    // choose your character
    cout << "______________________________________________________________________" << endl;
    cout << "CHOOSE YOUR SAMURAI FIGHTER!" << endl;
    cout << " ---> Press 1 for RED SAMURAI..." << endl;
    cout << "\t"
         << "[ HP = 4, STRENGTH = 6]" << endl;
    cout << "\t"
         << "'RED SAMURAI are trained to have more strength on the battlefield with" << endl;
    cout << "\t"
         << " the ability to cut down foes quicker and cause more damage." << endl;
    cout << "\t"
         << "*Careful! The RED SAMURAI pays the price by having smaller health!'" << endl;

    cout << endl;
    cout << " ---> Press 2 for BLUE SAMURAI..." << endl;
    cout << "\t"
         << "[ HP = 8, STRENGTH = 3]" << endl;
    cout << "\t"
         << "'BLUE SAMURAI are trained to have more health to survive longer and" << endl;
    cout << "\t"
         << " use their defense to an advantage." << endl;
    cout << "\t"
         << "*Careful! The BLUE SAMURAI pays the price by having smaller strength!'" << endl;

    cout << endl;
    cout << " ---> Press 0 to QUIT GAME..." << endl;

    cout << endl
         << "WHICH SAMURAI WILL YOU BE... ";
    cin >> samurai;
    samuraiChoice(samurai);
    cout << line << endl << endl;

    // prepping hp & strength with choices
    if (samurai == 0)
    {
        health += 4;
        strength += 6;
        energy += 15;
        healthPotion++;
    }

    if (samurai == 1)
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

    return 0;
}
