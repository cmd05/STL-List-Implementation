#include <iostream>

#include <list>
#include "list/list.h"

template<typename T>
void print(std::initializer_list<T> val, char sep = '\t') {
	for(T x : val) std::cout << x << sep;
}

template<typename T>
void pt_list(T& ls) {
	for(auto x : ls) print({x});
	std::cout << '\n';
}

template <template <class...> class Container>
void run_test() {
	Container<int> l1 {1, 2, 3};
	Container<int> l2 = l1;

	// l1.push_back(10);
	// l1.clear();
	// l1.resize(5);
	// l1.insert(l1.end(), 100);
	// l1.insert(l1.begin(), 101);	

	l1.merge(l2);
	l2.push_back(12);
	l2.resize(10, 5);

	pt_list(l1);
	pt_list(l2);
}

int main() {
	run_test<list>();
	// run_test<std::list>();
}