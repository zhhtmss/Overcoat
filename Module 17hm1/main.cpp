#include <iostream>
#include "Overcoat.h"

int main()
{
	Overcoat overcoat1("Winter Coat", 90.0, 42);
	Overcoat overcoat2("Summer Coat", 100.0, 38);

	if (overcoat1 == overcoat2) {
		std::cout << "Overcoats are equal." << std::endl;
	}
	else {
		std::cout << "Overcoats are not equal." << std::endl;
	}

	Overcoat overcoat3 = overcoat1;
	std::cout << "Assigned overcoat type: " << overcoat3.getType() << std::endl;

	if (overcoat1 > overcoat2) {
		std::cout << "Overcoat1 is more expensive than Overcoat2." << std::endl;
	}
	else {
		std::cout << "Overcoat1 is not more expensive than Overcoat2." << std::endl;
	}

}