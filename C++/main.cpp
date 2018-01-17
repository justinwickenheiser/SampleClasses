#include "coord.h"
#include "performer.h"
#include <iostream>

int main() {
	coord c1(1.3,9.5), c2;
	performer p1;
	performer p2('K');
	performer p3;

	p1.setPosition(c1);
	p2.setPosition(5.5,7.5);

	std::cout << "p1: " << p1 << std::endl;
	std::cout << "p2: " << p2 << std::endl;

	p1 = p2;
	std::cout << "\nAfter saying p1 = p2:\n";
	std::cout << "p1: " << p1 << std::endl;
	std::cout << "p2: " << p2 << std::endl;

	return 0;
}