#include <iostream>
#include <string>
// #include <vector>
using namespace std;

bool debug = true;

class human {
protected:
	string name = "";
	int health = 10;
	int damage = 4;
	int gold = 0;

public:
	human(string givenName, int givenHealth, int givenDamage, int givenGold) {
		name = givenName;
		health = givenHealth;
		damage = givenDamage;
		gold = givenGold;
	};

	human() {}

	void SayHello() {
		cout << "They call me " << name << "!" << endl;
		cout << "I have " << health << " health, and I deal " << damage << ".\n";
		cout << "I also have " << gold << " gold!\n";
	}

	void SetHealth(int healthAmount) {
		if (debug) {
			cout << "at the top of SetHealth(healthAmount), health = " << health << ", healthAmount = " << healthAmount << endl;
		}

		if (health < 0) {
			health = 0;
		}

		if (health > 100) {
			health = 100;
		}

		health += healthAmount;
	}

	int GetHealth() {


		return health;
	}

	void SetDamage(int damageAmount) {
		damage = damageAmount;
	}

	int GetDamage() {
		return damage;
	}

	void SetName(string newName) {
		name = newName;
	}

	string GetName() {
		return name;
	}

	void SetGold(int goldAmount) {
		gold += goldAmount;
	}

	int GetGold() {
		return gold;
	}

};


class barbarian : public human {

public:
	/*barbarian() {
		cout << "A fierce barbatian from the north approaches!\n";
		health = 45;

		SayHello();
	}*/
	barbarian(string givenName, int givenHealth, int givenDamage, int givenGold) {
		name = givenName;
		health = givenHealth;
		damage = givenDamage;
		gold = givenGold;
	};


	void Yell(string givenYell = "") {
		cout << "The barbarian yells, boosting the team's stats.\n";
		cout << givenYell << endl;
	}

	void DoubleSwing(human& target) {
		cout << "The barbarian swings both weapons at " << target.GetName() << "!\n";

		int tempDamage = this->GetDamage() * 2;
		target.SetHealth(-tempDamage);
	}

};


class shopkeep : public human {

public:

	shopkeep(string givenName, int givenHealth, int givenDamage, int givenGold) {
		name = givenName;
		health = givenHealth;
		damage = givenDamage;
		gold = givenGold;
	};


	void DropGold(human& target, int givenGold) {
		cout << "The shopkeep drops " << givenGold << " gold.\n";

		target.SetGold(givenGold);
	}

};


int main() {
	barbarian bane("Bane", 22, 4, 0);
	bane.SayHello();

	shopkeep beatle("Beatle", 20, 3, 100);

	human lorant;
	lorant.SetName("Lorant");
	lorant.SetHealth(20);
	lorant.SetDamage(4);
	lorant.SetGold(0);

	lorant.SayHello();

	cout << "AHH, A WELL TIMED COMBAT ENCOUNTER!\n";

	lorant.SetHealth(-7);

	cout << "that's ok, I always come back stronger\n";

	lorant.SetDamage(5);

	lorant.SayHello();

	cout << endl << endl << endl;

	bane.DoubleSwing(lorant);

	lorant.SayHello();

	cout << endl << endl << endl;

	beatle.DropGold(lorant, 10);

	lorant.SayHello();

	return 0;
};