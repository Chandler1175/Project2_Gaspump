//----------------------------------------------------------------------------------------\\
//          CS 215 - 005  Project 1                                                       \\
//----------------------------------------------------------------------------------------\\
// Author: Chandler Hamilton                                                              \\
// Date: 2/5/2020                                                                         \\
// Description: The program takes user input and decideds whether or not a peppper is hot \\
//----------------------------------------------------------------------------------------\\



#include <iomanip>
#include <string>
#include <iostream>
using namespace std;
int main() {


	string accountNum;
	float deposit;
	double accountBal;
	double withdrawal;
	accountBal = 0;
	string input;


	cout << "+------------------------------+\n"
		<< "|     Chandler's Bank, Inc.    |\n"
		<< "|           CS215-005          |\n"
		<< "+------------------------------+\n";


	// begining transaction
	cout << "Enter your account number:  ";
	setw(10);
	cin >> (accountNum);
	cout << "Enter your account balance: ";
	cin >> (accountBal); cout << endl;


	//print menu 
	cout << "B - Balance Inquiry\n"
		<< "D - Deposit\n"
		<< "W - Withdrawl\n"
		<< "Enter a letter: ";
	cin >> input;

	// the while and if statements.
	while (input != "Shutdown")
		// option B shows the user their balance
		if (input == "B") {
			cout << "+------------------------------+\n"
				<< "|     Chandler's Bank, Inc.    |\n"
				<< "|           CS215-005          |\n"
				<< "+------------------------------+\n";
			cout << "Account:           "; cout << (accountNum); cout << endl;
			cout << "Account Balance: $ "; cout << (accountBal); cout << endl;
			cin >> input;
		}
	// option D lets the user make a deposit.
		else if (input == "D") {
			cout << "Enter a deposit amount: ";
			cin >> (deposit); cout << endl;
			cout << "+------------------------------+\n"
				<< "|     Chandler's Bank, Inc.    |\n"
				<< "|           CS215-005          |\n"
				<< "+------------------------------+\n";
			cout << "Account:            "; cout << accountNum; cout << endl;
			cout << "Previous Balance: $ "; cout << accountBal; cout << endl;
			cout << "Deposit:          $ " << deposit << endl;
			cout << "New Balance:      $ "; cout << accountBal + deposit; cout << endl;

		}
	// option W lets the user withdraw money from their account. 
		else if (input == "W") {

			cout << "Enter withdrawal amount: ";
			cin >> withdrawal; cout << endl;

			if (withdrawal > accountBal) {
				cout << "insufficient Funds." << "account balance is: $ " << accountBal << endl;
				cout << "Enter withdrawal amount:  ";
				cin >> withdrawal; cout << endl;
			}

			cout << "+------------------------------+\n"
				<< "|     Chandler's Bank, Inc.    |\n"
				<< "|           CS215-005          |\n"
				<< "+------------------------------+\n";
			cout << "Account:            "; cout << accountNum; cout << endl;
			cout << "Previous Balance: $ "; cout << accountBal; cout << endl;
			cout << "Withdrawn:        $ " << withdrawal << endl;
			cout << "New Balance:      $ "; cout << accountBal - withdrawal; cout << endl;

		}

		else if (input == "shutdown")
			cout << "Goodbye.";
		else {
			cout << "that is an invalid option please enter D, W, B or shutdown.";
			cin >> input;
		}
		
	

		
		
	
		
	

	system("pause");
}
	
	//Write a C++ program that simulates the function of an ATM machine.For each transaction, the program :
	//-asks the user to enter their current account number and balance(unrealistic, but we don’t know
	//	how to read data from files yet).
	//	- displays a menu of transaction options
	//	- asks the user to choose an option, forcing them to enter a correct option
	//- depending on the option chosen, asks for more information
	//	- performs the calculations for the transaction
	//	- prints the calculated amounts as a “receipt”.


	




























































































