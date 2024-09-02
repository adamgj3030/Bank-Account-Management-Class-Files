# Bank-Account-Management-Class-Files
C++ Class and Test Files for a Bank Account Management System

-	Must have these private data members:
o	customerName (string)
o	savingsAccountBalance (double)
o	checkingAccountBalance (double)

-	Must have these public member functions
o	Implement the following constructor and member functions:
o	BankAccount(string newName, double chBalance, double sBalance): Initialize the customer name, checking account balance, and savings account balance with the given parameters.
o	void SetName(string newName): Set the customer name to the provided parameter newName.
o	string GetName(): Return the customer name.
o	void SetChecking(double balance): Set the checking account balance to the provided parameter balance.
o	double GetChecking(): Return the checking account balance.
o	void SetSavings(double balance): Set the savings account balance to the provided parameter balance.
o	double GetSavings(): Return the savings account balance.
o	void DepositChecking(double amt): Add the parameter amt to the checking account balance, only if amt is positive.
o	void DepositSavings(double amt): Add the parameter amt to the savings account balance, only if amt is positive.
o	void WithdrawChecking(double amt): Subtract the parameter amt from the checking account balance, only if amt is positive.
o	void WithdrawSavings(double amt): Subtract the parameter amt from the savings account balance, only if amt is positive.
o	void TransferToSavings(double amt): Subtract the parameter amt from the checking account balance and add it to the savings account balance, only if amt is positive.
