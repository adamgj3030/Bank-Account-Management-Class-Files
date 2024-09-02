#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

int main() {
    // Set initial values for BankAccount Class
    string currCustomerName = "John Doe";
    double currSavingsAccountBalance = 1000;
    double currCheckingAccountBalance = 2000;

    
    cout << "Beginning Tests." << endl;

    // Creates object testBankAccount of class BankAccount
    BankAccount testBankAccount(currCustomerName, currCheckingAccountBalance, currSavingsAccountBalance);
    

    // Check get customerName
    if (testBankAccount.GetName() != currCustomerName) {
        cout << "   FAILED get customerName" << endl;
    } 


    // Check get savingsAccountBalance
    if (testBankAccount.GetSavings() != currSavingsAccountBalance) {
        cout << "   FAILED get savingsAccountBalance" << endl;
    } 


    // Check get checkingAccountBalance
    if (testBankAccount.GetChecking() != currCheckingAccountBalance) {
        cout << "   FAILED get checkingAccountBalance" << endl;
    } 


    // Check set customerName
    testBankAccount.SetName("Jane Doe");
    if (testBankAccount.GetName() != "Jane Doe") {
        cout << "   FAILED set customerName" << endl;
    } 


    // Check set savingsAccountBalance
    testBankAccount.SetSavings(2500);
    if (testBankAccount.GetSavings() != 2500) {
        cout << "   FAILED set savingsAccountBalance" << endl;
    } 


    // Check set checkingAccountBalance
    testBankAccount.SetChecking(1500);
    if (testBankAccount.GetChecking() != 1500) {
        cout << "   FAILED set checkingAccountBalance" << endl;
    } 


    // Check DepositSavings
    testBankAccount.DepositSavings(500);
    if (testBankAccount.GetSavings() != 3000) {
        cout << "   FAILED deposit customerName" << endl;
    } 


    // Check DepositChecking
    testBankAccount.DepositChecking(500);
    if (testBankAccount.GetChecking() != 2000) {
        cout << "   FAILED deposit savingsAccountBalance" << endl;
    } 


    // Check WithdrawSavings
    testBankAccount.WithdrawSavings(500);
    if (testBankAccount.GetSavings() != 2500) {
        cout << "   FAILED withdraw checkingAccountBalance" << endl;
    } 
    

    // Check WithdrawChecking
    testBankAccount.WithdrawChecking(500);
    if (testBankAccount.GetChecking() != 1500) {
        cout << "   FAILED withdraw checkingAccountBalance" << endl;
    } 

    // Check TransferToSavings 
    testBankAccount.TransferToSavings(500);
    if ((testBankAccount.GetChecking() != 1000) || ((testBankAccount.GetSavings() != 3000))) {
        cout << "   FAILED transfer from checkingAccountBalance to savingsAccountBalance" << endl;
    } 

    
    cout << "Tests complete." << endl;

    return 0;
}
