#include <iostream>
#include <list>

#include "list/list.h"
#include "test/tests.h"

int main(int argc, char** argv) {
	// int n = atoi(argv[1]);
	// std::cout << "std::list: " << Test::PerformanceTest<std::list>::run(n) << " ms\n";
	// std::cout << "list: " << Test::PerformanceTest<list>::run(n) << " ms\n";
	Test::FunctionalityTests<list>::test2();
}