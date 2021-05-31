#include <iostream>
#include "counter.h"

int main() {
	// Add code here
	for (int i = 0; i < 3; i++) {
		increment();
	}
	std::cout << read() << '\n';
	decrement();
	std::cout << read() << '\n';
	for (int i = 0; i < 2; i++) {
		increment();
	}
	std::cout << read() << '\n';
	for (int i = 0; i < 2; i++) {
		increment();
	}
	std::cout << read() << '\n';
	increment();
}