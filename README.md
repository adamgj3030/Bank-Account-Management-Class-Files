# Bank-Account-Management-Class-Files
C++ Class and Test Files for a Bank Account Management System

Must have these private data members:
- customerName (string)
- savingsAccountBalance (double)
- checkingAccountBalance (double)

Must have these public member functions
- Implement the following constructor and member functions:
- BankAccount(string newName, double chBalance, double sBalance): Initialize the customer name, checking account balance, and savings account balance with the given parameters.
- void SetName(string newName): Set the customer name to the provided parameter newName.
- string GetName(): Return the customer name.
- void SetChecking(double balance): Set the checking account balance to the provided parameter balance.
- double GetChecking(): Return the checking account balance.
- void SetSavings(double balance): Set the savings account balance to the provided parameter balance.
- double GetSavings(): Return the savings account balance.
- void DepositChecking(double amt): Add the parameter amt to the checking account balance, only if amt is positive.
- void DepositSavings(double amt): Add the parameter amt to the savings account balance, only if amt is positive.
- void WithdrawChecking(double amt): Subtract the parameter amt from the checking account balance, only if amt is positive.
- void WithdrawSavings(double amt): Subtract the parameter amt from the savings account balance, only if amt is positive.
- void TransferToSavings(double amt): Subtract the parameter amt from the checking account balance and add it to the savings account balance, only if amt is positive.
