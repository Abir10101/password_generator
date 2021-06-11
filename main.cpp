#include <iostream>
#include "passgen.cpp"

int main(int argc, char** argv) {
	int length;
	std::cout << "Enter the length of password: ";
	std::cin >> length;

	std::string password = passgen( length );

	std::cout << password << '\n';

	return 0;
}