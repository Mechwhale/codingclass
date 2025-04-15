#include <iostream>
#include <string>
#include <vector>
using namespace std;



enum enemyType { GRUNT, MINIBOSS, BOSS };

// POD structures
// a custom variable

struct enemy {
	int health = 10;
	int damage = 4;
	string name = "Enemy";
	enemyType type = GRUNT;

};

struct address {
	string streetName;
	int streetNumber;
	string city;
	string stateCode;
	int zipCode;
};

struct employee {
	int Id = 0;
	string name;
	int age;
	address addr;
	float wage;
};

string addressOneLine(address addr) {

	string oneLine = "";
	oneLine += to_string(addr.streetNumber);
	oneLine += " " + addr.streetName;
	oneLine += ", " + addr.city;
	oneLine += ", " + addr.stateCode;
	oneLine += ", " + to_string(addr.zipCode);


	return oneLine;

};


int main() {
	cout << "Structures!\n";

	enemy larry;
	larry.health = 10;
	larry.damage = 4;
	larry.name = "Evil Larry";
	larry.type = GRUNT;

	cout << "Here's " << larry.name << "! His health is " << larry.health << ".\n";

	enemy james;
	james.damage = 6;
	james.name = "James";

	cout << james.name << " is attacking " << larry.name << "!!\n";
	larry.health -= james.damage;

	if (larry.health < 1) {
		cout << larry.name << " has been killed!\n";
	}
	else {
		cout << larry.name << " has " << larry.health << " health left\n";
	}

	vector<enemy> enemies;

	enemies.push_back(larry);
	enemies.push_back(james);

	for (int i = 0; i < enemies.size(); i++) {
		cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
		cout << "Their damage is " << enemies[i].damage << " and their type is ";
		switch (enemies[i].type) {
		case GRUNT:
			cout << "grunt";
			break;
		case MINIBOSS:
			cout << "mini-boss";
			break;
		case BOSS:
			cout << "boss";
			break;

		default:
			cout << "unknown";
			break;
		}
	}

	employee lorant;
	lorant.Id = 2456;
	lorant.name = "Lorant";
	lorant.age = 20;
	lorant.wage = 7.25f;
	lorant.addr.streetNumber = 1234;
	lorant.addr.streetName = "Main Street";
	lorant.addr.city = "Andover";
	lorant.addr.stateCode = "KS";
	lorant.addr.zipCode = 12345;

	cout << lorant.name << " lives at " << addressOneLine(lorant.addr) << ".\n";



	return 0;
}