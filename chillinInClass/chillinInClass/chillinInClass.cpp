// Lorant Madden Coding 1 Week 6 Spring 25, Feb 25, 2025
//Loops and Lists

#include <iostream>
#include <string>

using namespace std;

int main() {

	const int MAX_SIZE = 10;


	int element = 0;

	int scores[MAX_SIZE];


	scores[0] = 9001;

	
	cout << "The highest score in scores is " << scores[0] << ".\n";


	element = 1;
	scores[element++] = 682;
	scores[element++] = 604;
	scores[element++] = 412;

	cout << "The second score is " << scores[1] << ".\n";


	int counter = 0;
	while (counter <= 5) {
		counter++;

		cout << "scores " << scores[counter] << ".\n";
	
	}

	//create and array of strings named bestFriends
	//use a do-while loop to ask the user to add names, or quit.
	// at the end, we will use a for loop, to display all of the names.

	//create an array of string variables. you MUST specify a size, we'll pick 20.
	string bestFriends[20];
	int friendCount = 0;
	
	string input;

	do {
		cout << "You're creating a best friend catelog, who would you like to add?\n";
		cout << "or type 'quit' to quit.\n";
		getline(cin, input);

		if (input == "quit") {
			cout << "Thanks for adding names to the list!\n";
			break;
		}

		if (friendCount >= 19) {
			cout << "Oh no, that's all the friends that we can have.\n";
			break;
		}

		bestFriends[friendCount++] = input;

	} while (true);

	cout << "Here is a list of your best friends: \n";

	for (int i = 0; i < friendCount; i++) {
		cout << i + 1 << ".\t";
		cout << bestFriends[i] << "\n";
	}
	/*
	
	psudocode for FavGames assignment

	Setup
		int gameCount = 0;
		string games[size];
	start loop

	0. Greet player and ask for input
	1. Add
		ask the player "What name they want to add"
		get Input
		add that name to the array and increment
			gameCount
		(optional) tell player what name they've added
	2. Edit
		ask the player "what do you want name you want to edit"
		get Input
		check if that input exists in the list
		if (yes) {ask player for new name}
		if (no) {tell player "name doesn't excist in list. Type 'add' to add a name"}
	3. Remove
		ask the player "what name would you like to remove?"
		get Input
		check if that input exists in the list
		if (yes) {remove it}
		if (no) {tell player "name does not exist. Type 'Display' to show list"}
	4. Show
		Diplay whole list of names
	5. Quit
		Exit loop


	*/

}


