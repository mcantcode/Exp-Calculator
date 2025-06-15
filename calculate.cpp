#include <iostream>
#include <string>

struct rock {
	std::string name;
	double value;
};

int main(int argc, char *argv[]) {
	if (argc != 3) {
		std::cerr << "[ERROR] Expected 2 arguments, but received " << argc - 1 << ".\nUsage: ./calculate [OPTION] <number>\n";
		return 1;
	}

	if (std::string(argv[1]) != "-r" && std::string(argv[1]) != "--rebirths") {
		std::cerr << "[ERROR] Invalid option. Use '-r' or '--rebirths' to specify rebirth amount.\n";
		return 1;
	}

	int rebirthAmount;
	try {
		rebirthAmount = std::stoi(argv[2]);
		if (rebirthAmount < 1) {
			std::cerr << "[ERROR] Rebirth amount must be at least 1.\n";
			return 1;
		}
	} catch (const std::exception&) {
		std::cerr << "[ERROR] Invalid number format. Please enter a valid integer.\n";
		return 1;
	}

	rock rocks[] = {
		{ "Tiny", .025 }, { "Punching", .05 }, { "Large", .075 },
		{ "Golden", .2}, { "Frozen", .375 }, { "Mystic", .75 },
		{ "Inferno", 1.125 }, { "Legends", 2.5 }, { "Muscle King", 12.5 },
		{ "Ancient Jungle", 16.25 }
	};

	for (int i = 0; i < 10 ; i++)
		std::cout << rocks[i].name << " rock: " << (rebirthAmount + 20) * rocks[i].value << " Exp.\n";
}