// Task 5: Malig-on

#include "Menu.h"
#include <iostream>
using namespace std;

void displayMenu() {
    
    cout << "============================================" << endl;
    cout << "|            AlgoBank System               |" << endl;
    cout << "============================================" << endl;
    cout << "| 1. Create Account                        |" << endl;
    cout << "| 2. Deposit                               |" << endl;
    cout << "| 3. Withdraw                              |" << endl;
    cout << "| 4. View Account Details                  |" << endl;
    cout << "| 5. Undo Last Transaction                 |" << endl;
    cout << "| 6. Exit                                  |" << endl;
    cout << "============================================" << endl;
    cout << "Select an option: ";

}

void run() {
    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\n>> Create Account" << endl;
                break;
            case 2:
                cout << "\n>> Deposit" << endl;
                break;
            case 3:
                cout << "\n>> Withdraw" << endl;
                break;
            case 4:
                cout << "\n>> View Account Details" << endl;
                break;
            case 5:
                cout << "\n>> Undo Last Transaction" << endl;
                break;
            case 6:
                cout << "\nGoodbye!" << endl;
                break;
            default:
                cout << "\nInvalid! Try again." << endl;
        }
    } while(choice != 6);
}