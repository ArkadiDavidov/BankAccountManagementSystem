#include "BankAccount.h"
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
int main() {
	
	std::vector <BankAccount> accounts;
	int accountNumber = BankAccount::randomnumb();
	std::string accountHolderName;
	double balance;
	int choice;
	std::string yesorno;
	double amount;
	for (auto& acc : accounts) {
	
	}
	
	std::cout << "Hello, please select 1 of the following functiuons " << std::endl;
	std::cout <<"1. Create Account\n2.Deposit Money\n3.Withdraw Money\n4.Display Account Details\n5.Exit\n" << std::endl;
	while (true) {
		std::cin >> choice;
		// account craeting
		if (choice == 1) {
			std::cout << "Enter your First Name and Second Name" << std::endl;
			std::cin >> accountHolderName;
			std::cout << accountHolderName << std::endl;
			std::cout << "Your balance - 0\n Would you like to top up your balance? (Press Yes or No) " << std::endl;
			std::cin >> yesorno;
			if (yesorno == "Yes") {
				std::cout << "Insert the bills into the ATM " << std::endl;
				std::cin >> balance >> amount;
				balance += amount;
				std::cout << "Your balance: " << balance << std::endl;
				for (auto& acc : accounts) {
					acc.deposit(amount);
					accounts.push_back(BankAccount(accountNumber, accountHolderName, balance));

					break;
				} // for 1
			} //if 2
			else if (yesorno == "No") {
				accounts.push_back(BankAccount(accountNumber, accountHolderName, balance));
			} // else if 1
			std::cout << "Account created " << std::endl;
			for (const auto& acc : accounts) {
				acc.get_info();
			}

		} // if 1

	// Deposit money


		if (choice == 2) {
			std::cout << "Your Balance: " << balance << std::endl;
			std::cout << "How much do you want to add?: " << std::endl;
			std::cin >> amount;
			balance += amount;
			std::cout << "New balance: " << balance << std::endl;
	
		}

		//Withdraw Money 
		if (choice == 3) {
			std::cout << "Your balance: " << balance << std::endl;
			std::cout << "How much do you want to withdraw?: " << std::endl;
			std::cin >> amount;
			std::cout << "You have withdrawn: " << amount << std::endl;
			balance -= amount;
			std::cout << "New balanse: " << balance << std::endl;
		}

		//Display Account Details
		if (choice == 4) {
			for (auto& acc : accounts) {
				acc.get_info();
			}
		}

		// Exit
		if (choice == 5) {
			exit(1);

		}
	}
		return 0;
}