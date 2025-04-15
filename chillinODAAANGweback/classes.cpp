#include <iostream>
#include <string>
#include <vector>
using namespace std;



class robot {
private:
	string name;
	string phrase;
	int charge = 10;
	int maxCharge = 100;
	int minCharge = 0;


public:
	//constructor, has to be names same as the class and doesn't have a return type
	robot(string givenName, string givenPhrase, int givenCharge) {
		name = givenName;
		phrase = givenPhrase;
		charge = givenCharge;

		cout << "A new robot has been constructed!\n";
	}

	robot() {
		cout << "Using the DEFAULT constructor.\n";
		cout << "Hey programmer Dean, please fix this in the source code.\n";
	}

	void SayHello() {
		cout << "My name is " << name << " and my charge is " << charge << endl;
		cout << phrase << endl;
		ChangeCharge();
	}
	
	void SetCharge(int givenCharge) {
		if(givenCharge < 0) {
			charge = 0;
		} else if (charge > 100) {
			charge = 100;
		} else {
			charge = givenCharge;
		}
	}

	void ChangeCharge(int by = -1) {
		charge += by;
		SetCharge(charge);
	}

	int GetCharge() {
		return charge;
	}

	void SetName(string givenName) {
		if(givenName.size() < 2) {
			cout << "name is too short!\n";
			return;
		} else if (givenName.size() > 20) {
			cout << "name is too long\n";
			return;
		} else {
			name = givenName;
		}
	}

	string GetName() {
		return name;
	}

protected:
};


int main() {
	cout << "classes, yeah!\n";

	robot bobert; //constructor runs here
	bobert.SetName("Bobert Jr.");
	bobert.SetCharge(5);

	cout << "have a look at my new robot! his name is " << bobert.GetName() << ".\n";
	cout << "I am currently charging them, their charge is " << bobert.GetCharge() << ".\n";

	bobert.ChangeCharge(50);
	cout << "two hours later, bobert's charge is now " << bobert.GetCharge() << endl;

	robot rob("Roberto", "I can fix anything!", 25);
	cout << "My new robot is very expensive! He works on the nuclear reactor.\n";
	cout << "He can introduce himself, watch!\n";
	rob.ChangeCharge(-200);
	rob.SayHello();


	return 0;
};