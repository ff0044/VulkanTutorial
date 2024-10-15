#include "first_app.h"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() {
	lve::first_app app{};

	try {
		app.run();
	}
	catch (const std::exception &e) {
		std::cerr << "[ERROR]     | An error has occured!: " << e.what() << '\n';
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}