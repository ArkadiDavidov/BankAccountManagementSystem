# Bank Account Management System
A simple C++ console application that simulates basic banking operations, such as creating an account, depositing money, withdrawing funds, and displaying account details.

## Features
✔ Create a new bank account – Generates a random 6-digit account number and stores the account holder's name and balance.

✔ Deposit money – Adds funds to the account balance.

✔ Withdraw money – Deducts money from the balance (checks for sufficient funds).

✔ Display account details – Shows account number, holder name, and current balance.

✔ Interactive menu – User-friendly command-line interface.

## How It Works
### Account Creation

✔ The user enters their name.

✔ A random 6-digit account number is generated.

✔ The user can optionally deposit an initial amount.

### Deposits & Withdrawals

✔ Users can add or withdraw money with balance checks.

### Account Management

✔ All accounts are stored in a std::vector<BankAccount>.

✔ Users can view their account details at any time.

## Code Structure
BankAccount Class

Stores: accountNumber, accountHolderName, balance.

Methods:

randomnumb() – Generates a random 6-digit number.

deposit(amount) – Increases balance.

withdraw(amount) – Decreases balance (if sufficient funds).

get_info() – Displays account details.

main() Function

Handles user input via a menu-driven system.

Uses a while(true) loop for continuous operation.

## How to Run
### Compile with a C++17-compatible compiler (e.g., g++):

sh
g++ main.cpp -o bank_system

### Run the executable:

sh
./bank_system

### Follow the on-screen prompts.

## Possible Improvements
🔹 Persistent storage (save accounts to a file).
🔹 Password/PIN security.
🔹 Multiple accounts per user.
🔹 Transaction history logging.
