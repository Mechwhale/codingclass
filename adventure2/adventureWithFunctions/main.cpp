//Lorant Madden - adventure 2

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;

//Global Variables ------------------------------------------------------

int playerHealth = 10;
int totalTreasure = 0;

//functions -------------------------------------------------------------

void Story() {
	cout << "Welcome Adventurer...";
}

void Ending() {
	if (playerHealth > 0) {
		cout << "Thanks for playing! Your final health is: " << playerHealth << endl;
		cout << "Your final treasure is: " << totalTreasure << endl;
	}
	else {
		cout << "you died and lost all your treasure";
	}
}

bool AskYesNo(string question = "") {
	bool isAsking = true;
	string answer;

	while (isAsking) {
		cout << question << endl;
		cout << "yes/no" << endl;
		cin >> answer;

		if (answer == "yes") {
			return true;
		}
		else if (answer == "no") {
			return false;
		}
		else {
			cout << "Invalid response. Say either 'yes' or 'no'" << endl;
		}
	}
	return false;
}

int RollDie(int sides = 6) {
	return (rand() % sides) + 1;
}

void Adventure() {
	int attack = RollDie();
	int defence = RollDie();
	int treasure = RollDie();

	if (attack > defence) {
		playerHealth -= attack;
		cout << "OUCH! The enemy dealt " << attack << " damage" << endl;
	}
	else {
		totalTreasure += treasure;
		cout << "Attack blocked! You gained " << treasure << " more treasure" << endl;
	}

	cout << endl << "Total health: " << playerHealth << endl << "Total treasure: " << totalTreasure << endl;
}

//main  ----------------------------------------------------------------

int main() {
	//random seed
	srand(static_cast<unsigned>(time(0)));

	Story();

	bool isAdventuring = true;

	while (isAdventuring && playerHealth > 0) {
		if (AskYesNo("Will you keep adventuring?: ")) {
			Adventure();
		}
		else {
			isAdventuring = false;
		}
	}

	Ending();
}