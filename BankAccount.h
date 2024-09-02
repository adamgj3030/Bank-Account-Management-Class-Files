#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
    private:
        // Private data members to store the customer's name, savings account balance, and checking account balance
        string customerName;  // Name of the customer
        double savingsAccountBalance;  // Balance in the savings account
        double checkingAccountBalance;  // Balance in the checking account

    public:
        // Default constructor
        // Initializes the customer name to "NoInputName" and both balances to -1
        BankAccount();
        
        // Parameterized constructor
        // Initializes the customer name, checking account balance, and savings account balance with the provided amounts
        BankAccount(string newName, double chBalance, double sBalance);

        // Sets the customer name to the provided name
        void SetName(string newName);

        // Returns the current customer name
        string GetName() const;

        // Sets the checking account balance to the provided amount
        void SetChecking(double balance);

        // Returns the current checking account balance
        double GetChecking() const;

        // Sets the savings account balance to the provided amount
        void SetSavings(double balance);

        // Returns the current savings account balance
        double GetSavings() const;

        // Adds the provided amount to the checking account balance, if the amount is positive
        void DepositChecking(double amt);

        // Adds the provided amount to the savings account balance, if the amount is positive
        void DepositSavings(double amt);

        // Subtracts the provided amount from the checking account balance, if the amount is positive and less than or equal to the current balance
        void WithdrawChecking(double amt);

        // Subtracts the provided amount from the savings account balance, if the amount is positive and less than or equal to the current balance
        void WithdrawSavings(double amt);

        // Transfers the provided amount from the checking account balance to the savings account balance, if the amount is positive and less than or equal to the current checking balance
        void TransferToSavings(double amt);
};

#endif
