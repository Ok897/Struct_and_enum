#include <iostream>

enum class months
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main(int atgc, char** argv)
{
	int month{};

	std::cout << "Enter the month number: ";
	std::cin >> month;

	while (month != 0)
	{
		switch (static_cast<months>(month))
		{
		case months::January: std::cout << "January" << std::endl; break;
		case months::February: std::cout << "February" << std::endl; break;
		case months::March: std::cout << "March" << std::endl; break;
		case months::April: std::cout << "April" << std::endl; break;
		case months::May: std::cout << "May" << std::endl; break;
		case months::June: std::cout << "June" << std::endl; break;
		case months::July: std::cout << "July" << std::endl; break;
		case months::August: std::cout << "August" << std::endl; break;
		case months::September: std::cout << "September" << std::endl; break;
		case months::October: std::cout << "October" << std::endl; break;
		case months::November: std::cout << "November" << std::endl; break;
		case months::December: std::cout << "December" << std::endl; break;
		default: std::cout << "Incorrect month number" << std::endl; break;
		}

		std::cout << "Enter the month number: ";
		std::cin >> month;
	}

	std::cout << "Have a good day!" << std::endl;

	return EXIT_SUCCESS;
}