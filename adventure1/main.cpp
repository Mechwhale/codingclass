#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() {
    //setup
    cout << "Time to go on a wacky wild adventure\n";
  
    //game vars
    int health = 10;
    int attack;
    int block;
    int turns = 0;

    srand(static_cast<unsigned>(time(0)));

    // Gameplay loop
    while (health > 0 && turns < 4) {
        turns++;
        cout << "\nRound " << turns << " begins!\n";

        // Start the encounter
        attack = rand() % 5; // Random num 0-4
        block = rand() % 5; 

        cout << "Slime attacks with: " << attack << " damage" << "\nYou block with: " << block << " defence\n";

        if (block >= attack) {
            cout << "*blocked* Phew, that was close!\n";
        } else {
            health -= attack;
            cout << "*hurt* Owch! You lost " << attack << " health\n";
        }

        cout << "Your current health: " << health << "\n";

        // response section
        char choice;
        cout << "Do you want to keep fighting? (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N') {
            cout << "You chose to end your adventure early.\n";
            break;
        } else if (choice == 'y' || choice == 'Y') {
            cout << "I NEVER QUIT!?!?!?!\n";
        }
    }

    // giving up
    if (health > 0 && turns >= 4) {
        cout << "\nYou truely are a great hero! You survived all rounds\n";
    } else if (health > 0) {
        cout << "\nA good hero knows when his story ends\n";
    } else {
        cout << "\nYOU SUCK!\n";
    }

    return 0;
}
