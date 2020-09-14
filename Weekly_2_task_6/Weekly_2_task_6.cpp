#include <iostream>
#include <string>

int main() {

	char answer;

	std::cout << "Hello, what is your wanted grade in Programming 1?: ";
	std::cin >> answer;

	switch (answer) {
	case 'A': case 'a':
		std::cout << "Outstanding";
		break;

	case 'B': case 'b':
		std::cout << "Very good";
		break;

	case 'C': case 'c':
		std::cout << "Good";
		break;

	case 'D': case 'd':
		std::cout << "Some flaws";
		break;

	case 'E': case 'e':
		std::cout << "Not very good";
		break;

	case 'F': case 'f':
		std::cout << "Fail";
		break;

	default:
		std::cout << "That's not a grade!";
		break;
	}
}