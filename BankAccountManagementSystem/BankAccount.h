#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
	int _accountID;
	string _holder;
	int _balance;
public:
	BankAccount(int id, string holder, int balance);
	void setAccountID(int id);
	void setHolder(string holder);
	void setBalance(int balance);
	int getAccountID();
	string getHolder();
	int getBalance();
	void deposit(int amount);
	void withdraw(int amount);
	void showAccoutnInfo();
};