#include <iostream>
#include <string>

struct bank_account
{
	int account_number;
	std::string person_name;
	float balance;
};

void balance_changes(bank_account& account);

int main(int argc, char** argv)
{
	bank_account account;

	std::cout << "Enter the bank accout number: ";
	std::cin >> account.account_number;
	std::cout << "Enter the owner's name: ";
	std::cin >> account.person_name;
	std::cout << "Enter the balance: ";
	std::cin >> account.balance;

	balance_changes(account);

	std::cout << "Your account: " << account.person_name << ", " << account.account_number << ", " << account.balance << std::endl;

	return EXIT_SUCCESS;
}

void balance_changes(bank_account& account)
{
	int new_balance{};
	std::cout << "Enter the new balance: ";
	std::cin >> new_balance;
	account.balance = new_balance;
}