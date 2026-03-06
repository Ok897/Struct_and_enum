#include <iostream>
#include <string>

struct adress
{
	std::string town;
	std::string street;
	float house_number;
	int apartment_number;
	int index;
};

void change_adress(adress& add, std::string new_town, std::string new_street, float new_house_number, int new_apartment_number, int new_index);

void sructure_output(adress& add);

int main(int argc, char** argv)
{
	adress add = {"Moscow", "Arbat", 12, 8, 123456};

	sructure_output(add);

	change_adress(add, "Izhevsk", "Pushkina", 59, 143, 953769);

	sructure_output(add);

	return EXIT_SUCCESS;
}

void change_adress(adress& add, std::string new_town, std::string new_street, float new_house_number, int new_apartment_number, int new_index)
{
	add.town = new_town;
	add.street = new_street;
	add.house_number = new_house_number;
	add.apartment_number = new_apartment_number;
	add.index = new_index;
}

void sructure_output(adress& add)
{
	std::cout << "Town: " << add.town << std::endl;
	std::cout << "Street: " << add.street << std::endl;
	std::cout << "House number: " << add.house_number << std::endl;
	std::cout << "Apartment number: " << add.apartment_number << std::endl;
	std::cout << "Index: " << add.index << "\n" << std::endl;
}