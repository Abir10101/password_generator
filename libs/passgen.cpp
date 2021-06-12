#include <string>
#include <ctime>

std::string passgen( int length ) {
	std::string password = "";

	char random_char;
	const int lower_limit = 33;
	const int upper_limit = 128;
	
	srand(time(NULL));

	for( int i = 0; i < length; i++ ) {
		random_char = (rand() % ( upper_limit - lower_limit + 1 )) + lower_limit;
		password += random_char;
	}

	return password;
}