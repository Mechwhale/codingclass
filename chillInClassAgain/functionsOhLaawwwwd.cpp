// Lorant Madden
// All about Function

// Warm-Up Task - Create abd array with 3 names
// Use a loop to display all of the names

#include <iostream>
#include <array>
#include <string>

using namespace std;

//Global Variables -------------------------------------------------------------------------------

int currentShirtSizeElement = 0;

//functions --------------------------------------------------------------------------------------

void sayHello() {
	cout << "Hello!\n";
};

void sayGoodbye() {
	cout << "Goodbye ):\n";
};


void add(int number1 = 2, int number2 = 2) {
	cout << "The sum of both numbers is: " << number1 + number2 << endl;
};

void add(float num1, float num2) {
	cout << num1 << " plus " << num2 << " is equal to ";
	cout << num1 + num2 << endl;
};

void add(string str1, string str2) {
	cout << str1 << " plus " << str2 << " is equal to ";
	cout << str1 + str2 << endl;
};


bool askYN(string question = "y/n") {
	do {
		cout << question << " (y/n)" << endl;
		string input;
		getline(cin, input);

		if (input == "y") {
			cout << endl;
			return true;
		}
		else if (input == "n") {
			cout << endl;
			return false;
		}
		else {
			cout << "Please type 'y' or 'n'.\n";
		}
	} while (true);
}


void show(string* array, int arraySize) {
	cout << "Here are the contents of your array:\n";
	for (int i = 0; i < arraySize; i++) {
		cout << array[i] << endl;
	}
}

void addShirt(string* array) {
	do {
		string input;

		cout << "Please add a shirt size to the array.\n";
		getline(cin, input);

		if (input == "done") {
			break;
		}
		else {
			array[currentShirtSizeElement++] = input;
		}

	} while (true);
}


//main -------------------------------------------------------------------------------------------

int main() {

	string shirtSizes[10];
	addShirt(shirtSizes);
	show(shirtSizes, currentShirtSizeElement);



	/*string names[3];

		names[0] = "John";
		names[1] = "Jack";
		names[2] = "Joseph";

	for (int i = 0; i <= 2; i++) {
		cout << names[i] << " \n";
	};

	cout << endl;

	sayHello();
	sayGoodbye();

	cout << endl;

	add(43, 2);
	add();
	add(10.2f, 30.4f);
	add("three", "four");

	if (askYN("do you like pizza?")) {
		cout << "Lets get pizza";
	}
	else {
		cout << "FUCK YOU";
	}

	show(names, 3);*/

}