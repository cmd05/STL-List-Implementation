#include <list>
#include "list/list.h"
#include "tests/tests.h"

int main() {
	std::cout << "time: " << insertion_test<std::list>(10000);
}