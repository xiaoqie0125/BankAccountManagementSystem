#include "BankAccount.h"

BankAccount::BankAccount(int id, string holder, int balance) {
	this->_accountID = id;
	this->_holder = holder;
	this->_balance = balance;
}

void BankAccount::setAccountID(int id) {
	this->_accountID = id;
}
void BankAccount::setHolder(string holder) {
	this->_holder = holder;
}

void BankAccount::setBalance(int balance) {
	this->_balance = balance;
}

int BankAccount::getAccountID() {
	return this->_accountID;
}

string BankAccount::getHolder() {
	return this->_holder;
}

int BankAccount::getBalance() {
	return this->_balance;
}

void BankAccount::deposit(int amount) {
	this->_balance += amount;
	cout <<"Withdrawal amount"<< amount << "RMB has been deposited. " 
		<< "The balance is" << this->_balance << "RMB." << endl;
}

void BankAccount::withdraw(int amount) {
	while(this->_balance < amount) {
		cout << "The amount entered is more than the current balance of  " << this->_balance << "RMB." << endl;
		cout << "Please enter deposit amount: ";
		cin >> amount;
	}
	this->_balance -= amount;
	cout << amount << "RMB is withdrawn and the current balance is " << this->_balance << "RMB." << endl;
}

void BankAccount::showAccoutnInfo() {
	cout << "======================" << endl;
	cout << "The current account info:" << endl;
	cout << "Account ID: " << this->_accountID << endl;
	cout << "Holder: " << this->_holder << endl;
	cout << "Balance: " << this->_balance << endl;
	cout << "======================" << endl;
}