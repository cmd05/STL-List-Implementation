#include <iostream>

#include <list>
#include "list/list.h"
#include "tests/tests.h"

int main(int argc, char** argv) {
	int n = atoi(argv[1]);
	std::cout << "std::list: " << insertion_test<std::list>(n) << " ms\n";
	std::cout << "list: " << insertion_test<list>(n) << " ms";
}