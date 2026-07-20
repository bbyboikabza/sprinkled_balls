#include "rand_vals.hpp"

int rand_cords(){
	static std::random_device rd;
	static std::mt19937 gen(rd());

	std::uniform_int_distribution<> dist(80, 1000);
	return dist(gen);
}

