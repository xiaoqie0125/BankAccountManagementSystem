#include "Bank.h"

using namespace std;

int main() {
	Bank bank;

	char status = true;
	while (status) {
		char option;

		while (true) {

			system("cls");
			cout << "=======================" << endl;
			cout << "Menu" << endl;
			cout << "=======================" << endl;
			cout << "1. Register account" << endl;
			cout << "2. Delete account" << endl;
			cout << "3. List all of accounts" << endl;
			cout << "4. Show an account" << endl;
			cout << "5. Deposit" << endl;
			cout << "6. Withdraw" << endl;
			cout << "7. End" << endl;
			cout << "=======================" << endl;

			cout << "Plese enter your option: ";
			cin >> option;
			if (option >= '1' && option <= '7') {
				break;
			}
		}

		if (option == '7') {
			status = false;
			break;
		}

		switch(option) {
			case '1':
				bank.addAccount();
				break;
			case '2':
				bank.delAccount();
				break;
			case '3':
				bank.listAllAccount();
				break;
			case '4':
				bank.showAccount();
				break;
			case '5':
				bank.deposit();
				break;
			case '6':
				bank.withdraw();
				break;
			default:
				;
		}
		cout << "=======================" << endl;
		system("pause");
	}

	return 0;
}