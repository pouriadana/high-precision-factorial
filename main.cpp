#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using boost::multiprecision::cpp_int;

int main()
{
	std::cout << "Enter number for factorial calculation: ";
	int userInput;
	std::cin >> userInput;

	cpp_int factorial{ 1 };
	while (userInput > 1)
	{
		factorial *= userInput;
		userInput--;
	}
	
	std::cout << "Factorial = " << factorial << "\n";
}
