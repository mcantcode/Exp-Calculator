#include <iostream>
#include <string>
using namespace std;

struct rock {
	string name;
	double value;
};

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "Error: Missing arguments. Use '-r <number>' or '--rebirths <number>'.";
		return 0;
	}

	string arg1 = argv[1];
	int rebirthAmount;

	if (arg1 != "-r" && arg1 != "--rebirths") {
		cout << "Error: Invalid option. Use '-r' or '--rebirths'.";
		return 0;
	}

	try {
		rebirthAmount = stoi(argv[2]);
		if (rebirthAmount < 1) {
			cout << "Error: Rebirth amount must be at least 1.";
			return 0;
		}
	} catch (const exception& e) {
		cout << "Error: Invalid number format. Please enter a valid integer.";
		return 0;
	}

	rock rocks[] = {
		{ "Tiny", 0.025 },
		{ "Punching", 0.05 },
		{ "Large", 0.075 },
		{ "Golden", 0.2},
		{ "Frozen", 0.375 },
		{ "Mystic", 0.75 },
		{ "Inferno", 1.125 },
		{ "Legends", 2.5 },
		{ "Muscle King", 12.5 },
		{ "Ancient Jungle", 16.25 }
	};

	for (int i = 0; i < 10 ; i++) {
		cout << rocks[i].name << " rock: " << (rebirthAmount + 20) * rocks[i].value << " Exp.\n";
	}

	return 0;
}