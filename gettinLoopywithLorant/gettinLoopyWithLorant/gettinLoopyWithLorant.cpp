// gettinLoopyWithLorant
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int maxGames = 12;
	int gameCount = 3;
	string response = "";

	string games[maxGames] = { "zelda", "mario", "pokemon"};

	//framing message

	cout << "Welcome to your game collection.\n";

	//start loop
	do {
		//prompt player action
		cout << "\nHow would you like to access your collection?\n" << "(add, edit, remove, show, quit)\n";
		cin >> response;

		//add
		if (response == "add") {
			if (gameCount >= maxGames) {
				cout << "nah bruv. You already have " << gameCount << "in your collection.\n";
				cout << "remove or edit a game before you add one";

				break;
			}
			
			cout << "What game would you like to add to your collection?\n";
			cin >> response;

			//check if name already in list
			for (int i = 0; i <= gameCount; i++) {
				//cout << "checking through list\n";

				if (games[i] == response) {
					cout << "WOAH WOAH WOAH. YOU ALREADY OWN THAT GAME YOU FILTHY CAPITALIST\n";

					break;

				}
				
				if (i == gameCount) {
					cout << "added " << response << " to collection\n";

					gameCount++;
					games[i] = response;

					break;
				}
			}
		} 
		//remove
		else if (response == "remove") {
			cout << "What game would you like to remove from your collection?\n";
			cin >> response;

			for (int i = 0; i <= gameCount; i++) {
				if (games[i] == response) {
					cout << "removed " << response << " to collection\n";

					games[i] = "";
					i--;

					gameCount--;
				}
				else if (games[i] == "") {
				
					games[i] = games[i + 1];
					games[i + 1] = "";

				}
			}
		} 
		//edit
		else if (response == "edit") {
			cout << "What game would you like to edit in your collection?\n";
			cin >> response;

			for (int i = 0; i <= gameCount; i++) {
				if (games[i] == response) {
					cout << "What name would you like to change it to?\n";
					cin >> response;
					for (int k = 0; k <= gameCount; k++) {
						//cout << "checking through list\n";

						if (games[k] == response) {
							cout << "Can't do that bro, you already have a game with that name.\n";

							break;

						}
					}
					games[i] = response;
					cout << "name successfully changed to " << response;
					
					break;
				}
			}
		} 
		//show
		else if (response == "show") {
			cout << "Here's your collection!\n";
			
			for (int i = 0; i < gameCount; i++) {
				cout << i + 1 << ".\t";
				cout << games[i] << "\n";
			}
		}
		//quit
		else if (response == "quit") {
			break;
		} 
		//mispell
		else {
			cout << "response does not match any options given. Make sure to check your spelling and lettercase!\n\n";
		};

	} while (true);

}

