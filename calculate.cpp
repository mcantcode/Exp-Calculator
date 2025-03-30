#include <iostream>
#include <string>

struct rock {
	std::string name;
	double value;
};

int main(int argc, char* argv[]) {
	if (argc != 3)
		std::cout << "Error: Missing arguments. Use '-r <number>' or '--rebirths <number>'.";
		return 0;

	if (std::string(argv[1]) != "-r" && std::string(argv[1]) != "--rebirths")
		std::cout << "Error: Invalid option. Use '-r' or '--rebirths'.";
		return 0;

	int rebirthAmount;
	try {
		rebirthAmount = std::stoi(argv[2]);
		if (rebirthAmount < 1)
			std::cout << "Error: Rebirth amount must be at least 1.";
			return 0;
	} catch (const std::exception&)
		std::cout << "Error: Invalid number format. Please enter a valid integer.";
		return 0;

	rock rocks[] = {
		{ "Tiny", .025 }, { "Punching", .05 }, { "Large", .075 },
		{ "Golden", .2}, { "Frozen", .375 }, { "Mystic", .75 },
		{ "Inferno", 1.125 }, { "Legends", 2.5 }, { "Muscle King", 12.5 },
		{ "Ancient Jungle", 16.25 }
	};

	for (int i = 0; i < 10 ; i++)
		std::cout << rocks[i].name << " rock: " << (rebirthAmount + 20) * rocks[i].value << " Exp.\n";
}
