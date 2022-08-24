#include <iostream>

#include <list>
#include "list/list.h"
#include "tests/tests.h"

int main(int argc, char** argv) {
	int n = atoi(argv[1]);
	std::cout << "std::list: " << PerformanceTest<std::list>::run(n) << " ms\n";
	std::cout << "list: " << PerformanceTest<list>::run(n) << " ms\n";

	// Debug::print_c(list<int>{1,2,3});
	// FunctionalityTests<list>::test1();
}