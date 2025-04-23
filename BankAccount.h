#pragma once
#include <iostream>
#include <string>
#include <random>
class BankAccount
{
private:
	int accountNumber;
	std::string accountHolderName;
	double balance;

public:
	static int randomnumb() {
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dist(100000, 999999);
		return dist(gen);
	}

	BankAccount(int accountNumber1, std::string accountHolderName1, double balance1 ):
		accountNumber(accountNumber1), 
		accountHolderName(accountHolderName1),
		balance(balance1)
	{}

	void get_info() const {
		std::cout << "Acc Numb - " << accountNumber << std::endl;
		std::cout << "Acc Holder Name - " << accountHolderName << std::endl;
		std::cout << "Balance - " << balance << std::endl;
	}
	void deposit(double amount) {
		std::cout << "New balance - " << balance + amount << std::endl;
	}
	void withdraw(double amount) {
		if (balance >= amount) {
			std::cout << "Successful - " << balance - amount << std::endl;
		}
		else {
			std::cout << "Insufficient funds - " << std::endl;
		}
	}
};

