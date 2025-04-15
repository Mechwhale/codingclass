#include <iostream>
#include <string>
// #include <vector>
using namespace std;



class human {
private:
		string name = "";
		int health = 10;
		int damage = 4;

public:
	human(string givenName, int givenHealth, int givenDamage) {
		name = givenName;
	    health = givenHealth;
		damage = givenDamage;
	};

	human() {}

	void SayHello() {
		cout << "They call me " << name << "!" << endl;
		cout << "I have " << health << " health, and I deal " << damage << ".\n";
	}

	void SetAddHealth(int healthAmount) {
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
};


int main() {
	human lorant;
	lorant.SetName("Lorant");
	lorant.SetAddHealth(20);
	lorant.SetDamage(4);
	
	lorant.SayHello();

	cout << "AHH, A WELL TIMED COMBAT ENCOUNTER!\n";

	lorant.SetAddHealth(-7);

	cout << "that's ok, I always come back stronger\n";

	lorant.SetDamage(5);

	lorant.SayHello();

	return 0;
};