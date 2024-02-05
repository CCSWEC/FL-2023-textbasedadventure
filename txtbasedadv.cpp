#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <random>
using namespace std;

/**
 * @brief a user to choose from a set of options
 * @param prompt The prompt message for the user
 * @param options Array of strings holding the options</param>
 * @param numOptions The number of options in the array</param>
 * @return The array index of the chosen option, starting at 0</returns>
*/
int getChoice(string prompt, const char* const* options, int numOptions)
{
    cout << prompt << endl;

    for (int i = 0; i < numOptions; i++)
    {
        cout << '\t' << (i + 1) << ". " << options[i] << endl;
    }

    int choice = -1;

    do {
        cout << "Enter an option number: " << endl;
        cin >> choice;
    } while(choice < 1 || choice > numOptions);

    return choice - 1;
}

int enemyChoice()
{
    random_device randomNum;
    uniform_int_distribution<int> randomInt(1, 3);

    int enemyChoice = randomInt(randomNum);
    return enemyChoice;
}

/**
 * @brief Run level 1
 * @param samurai The index of the player's chosen samurai
*/
void levelOne(int samurai)
{
    const char* combatOptions[] = { "Attack", "Defend", "Heal" };

    switch (samurai)
    {
    case 0:
        cout << "You encounter a samurai student training in a forest, you see how much potential he has, so you decide to kill him." << endl;
        cout << "You approach the student and he can sense your anger, a fight starts!" << endl
             << endl;
        getChoice("Comat actions:", combatOptions, 3);
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

    const char* options[] = {
        "RED SAMURAI are trained to have more strength on the battlefield with the ability to cut down foes quicker and cause more damage, but pay the price by having smaller health!",
        "BLUE SAMURAI are trained to have more health to survive longer and use their defense to an advantage, but pay the price by having smaller strength!",
        "Quit Game"
    };

    samurai = getChoice("CHOOSE YOUR SAMURAI FIGHTER!", options, 3);
    samuraiChoice(samurai);
    cout << "______________________________________________________________________" << endl;

    // prepping hp & strength with choices
    if (samurai == 0)
    {
        health += 4;
        strength += 6;
        energy += 15;
    }

    if (samurai == 1)
    {
        health += 8;
        strength += 3;
        energy += 20;
    }

    cout << "Your starting HP is: " << health << endl;
    cout << "Your starting STRENGTH is: " << strength << endl;
    cout << "______________________________________________________________________" << endl;

    cout << "~" << endl;
    cout << "~" << endl;
    cout << "~" << endl;
    cout << "~" << endl;

    cout << "Welcome young Samurai...your task is to complete the SAMURAI TRIALS at the SAMURAI ACADEMY" << endl;
    cout << "by defeating your enemies, staying alive, solving problems, and defeating YASUKE to become an official SAMURAI." << endl;
    cout << "YASUKE is the leader of the SAMURAI ACADEMY, and will challenge every young Samurai to complete their training and earn their honor." << endl;

    cout << "~" << endl;

    cout << "Survive all 4 levels of the SAMURAI TRIALS and you will complete your training young Samurai!" << endl;

    cout << "~" << endl;
    cout << "______________________________________________________________________" << endl;
    cout << "LEVEL ONE ... BEGIN!" << endl;
    levelOne(samurai);

    return 0;
}
