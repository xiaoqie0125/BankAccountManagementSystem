#include "Bank.h"

Bank::Bank() {
	this->_num = 0;
}

void Bank::addAccount() {
	string holder;
	cout << "Please enter the holder name: ";
	cin >> holder;
	int balance;
	cout << "Please enter the balance: ";
	cin >> balance;

	this->_accountArry[this->_num] = new BankAccount(this->_num, holder, balance);
	this->_num++;
}

void Bank::delAccount() {
	int id;
	cout << "Please enter the account id: ";
	cin >> id;
	for(int i=0; i< this->_num; i++) {
		if(this->_accountArry[i]->getAccountID() == id) {

			delete this->_accountArry[i];

			for(int j=i+1; j< this->_num; j++) {
				this->_accountArry[j-1] = this->_accountArry[j];
			}

			cout << "The account id: " << id << "has been deleted." << endl;
			this->_num--;
			return;
		}
	}
}

void Bank::listAllAccount() {
	cout << "The number of account: " << this->_num << endl;
	cout << "------------------------" << endl;
	cout << "  ID         Holder " << endl;
	cout << "------------------------" << endl;
	
	for(int i=0; i< this->_num; i++) {
		cout << "   " << this->_accountArry[i]->getAccountID() 
			<< "         " << this->_accountArry[i]->getHolder() << endl;
	}
	cout << "------------------------" << endl;
}

void Bank::showAccount() {
	int id;
	cout << "Please enter the account id: ";
	cin >> id;
	
	for (int i = 0; i < this->_num; i++) {
		if (this->_accountArry[i]->getAccountID() == id) {
			this->_accountArry[i]->showAccoutnInfo();
		}
	}
}

void Bank::deposit() {
	int id, amount;
	cout << "Please enter the id: ";
	cin >> id;
	cout << "Please enter the deposit amount: ";
	cin >> amount;
	
	for (int i = 0; i < this->_num; i++) {
		if (this->_accountArry[i]->getAccountID() == id) {
			this->_accountArry[i]->deposit(amount);
			break;
		}
	}
}

void Bank::withdraw() {
	int id, amount;
	cout << "Please enter the id: ";
	cin >> id;
	cout << "Please enter the withdraw amount: ";
	cin >> amount;
	
	for (int i = 0; i < this->_num; i++) {
		if (this->_accountArry[i]->getAccountID() == id) {
			this->_accountArry[i]->withdraw(amount);
			break;
		}
	}
}