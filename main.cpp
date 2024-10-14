#include "first_app.h"

#include <cst>

int main() {
	lve::first_app app();

	try {
		app.run();
	}
	catch (const std::exception &e) {

	}
}