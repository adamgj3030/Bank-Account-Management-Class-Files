#include "BankAccount.h"

// Default constructor
// Initializes the customer name to "NoInputName" and both balances to -1
BankAccount::BankAccount() {
    customerName = "NoInputName";
    savingsAccountBalance = -1;
    checkingAccountBalance = -1;
}

// Parameterized constructor
// Initializes the customer name, checking account balance, and savings account balance with the provided amounts
BankAccount::BankAccount(string newName, double chBalance, double sBalance) {
    customerName = newName;
    savingsAccountBalance = sBalance;
    checkingAccountBalance = chBalance;
}

// Sets the customer name to the provided amount
void BankAccount::SetName(string newName) {
    customerName = newName;
}

// Returns the current customer name
string BankAccount::GetName() const {
    return customerName;
}

// Sets the checking account balance to the provided amount
void BankAccount::SetChecking(double balance) {
    checkingAccountBalance = balance;
}

// Returns the current checking account balance
double BankAccount::GetChecking() const {
    return checkingAccountBalance;
}

// Sets the savings account balance to the provided amount
void BankAccount::SetSavings(double balance) {
    savingsAccountBalance = balance;
}

// Returns the current savings account balance
double BankAccount::GetSavings() const {
    return savingsAccountBalance;
}

// Adds the provided amount to the checking account balance, if the amount is positive
void BankAccount::DepositChecking(double amt) {
    if (amt >= 0) {
        checkingAccountBalance += amt;
    }
}

// Adds the provided amount to the savings account balance, if the amount is positive
void BankAccount::DepositSavings(double amt) {
    if (amt >= 0) {
        savingsAccountBalance += amt;
    }
}

// Subtracts the provided amount from the checking account balance, if the amount is positive and less than or equal to the current balance
void BankAccount::WithdrawChecking(double amt) {
    if (amt >= 0 && amt <= checkingAccountBalance) {
        checkingAccountBalance -= amt;
    }
}

// Subtracts the provided amount from the savings account balance, if the amount is positive and less than or equal to the current balance
void BankAccount::WithdrawSavings(double amt) {
    if (amt >= 0 && amt <= savingsAccountBalance) {
        savingsAccountBalance -= amt;
    }
}

// Transfers the provided amount from the checking account balance to the savings account balance,
// if the amount is positive and less than or equal to the current checking balance
void BankAccount::TransferToSavings(double amt) {
    if (amt >= 0 && amt <= checkingAccountBalance) {
        checkingAccountBalance -= amt;
        savingsAccountBalance += amt;
    }
}
