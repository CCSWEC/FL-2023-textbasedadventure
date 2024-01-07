#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;


// function for player's samurai choice
void samuraiChoice(int samurai) {
    
        while (samurai != 1 || samurai != 2) {
        if (samurai == 1) {
            cout << endl << "YOU HAVE CHOSEN TO BE THE ... RED SAMURAI!" << endl;
            break;
        } else if (samurai == 2) {
            cout << endl << "YOU HAVE CHOSEN TO BE THE ... BLUE SAMURAI!" << endl;
            break;
        } else if (samurai == 0) {
            cout << "QUITING GAME..." << endl;
            exit(0);
        } else {
            cout << "INCORRECT SELECTION. Please choose '1' for RED SAMURAI or '2' for BLUE SAMURAI:  ";
        }
        cin >> samurai;
        }
    
}

//function for combat menu


int main()
{
    
    //variables 
    
    int samurai;
    int health = 0;
    int strength = 0;
    

    //main menu section
    cout << "********************************************************************" << endl;
    cout << "********************************************************************" << endl;
    cout << "TO BECOME A SAMURAI" << endl;
    cout << "********************************************************************" << endl;
    cout << "********************************************************************" << endl;
    cout << "C++ Adventure Text-Based Game" << endl;
    cout << "Created by Collin County Community College's Software Development Club" << endl;
    cout << "********************************************************************" << endl;
    
    cout << endl << endl;
    
    //choose your character
    cout << "______________________________________________________________________" << endl;
    cout << "CHOOSE YOUR SAMURAI FIGHTER!" << endl;
    cout << " ---> Press 1 for RED SAMURAI..." << endl;
    cout << "\t" << "[ HP = 4, STRENGTH = 6]" << endl;
    cout << "\t" << "'RED SAMURAI are trained to have more strength on the battlefield with" << endl;
    cout << "\t" << " the ability to cut down foes quicker and cause more damage." << endl;
    cout << "\t" << "*Careful! The RED SAMURAI pays the price by having smaller health!'" << endl;
    
    cout << endl;
    cout << " ---> Press 2 for BLUE SAMURAI..." << endl;
    cout << "\t" << "[ HP = 8, STRENGTH = 3]" << endl;
    cout << "\t" << "'BLUE SAMURAI are trained to have more health to survive longer and" << endl;
    cout << "\t" << " use their defense to an advantage." << endl;
    cout << "\t" << "*Careful! The BLUE SAMURAI pays the price by having smaller strength!'" << endl;
    
    cout << endl;
    cout << " ---> Press 0 to QUIT GAME..." << endl;
    
    cout << endl << "WHICH SAMURAI WILL YOU BE... ";
    cin >> samurai;
    samuraiChoice(samurai);
    cout << "______________________________________________________________________" << endl;
    
    // prepping hp & strength with choices
        if (samurai == 1){
        health = health + 4;
        strength = strength + 6;
        } 
    
        if (samurai == 2){
        health = health + 8;
        strength = strength + 3;
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
    
    
    
    
    
    
 return 0;
}



