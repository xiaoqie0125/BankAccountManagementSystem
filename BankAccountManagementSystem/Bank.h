#include "BankAccount.h"

#define SIZE 10

class Bank {
private:
	BankAccount *_accountArry[SIZE];
	int _num;
public:
	Bank();
	void addAccount();
	void delAccount();
	void listAllAccount();
	void showAccount();
	void deposit();
	void withdraw();
};