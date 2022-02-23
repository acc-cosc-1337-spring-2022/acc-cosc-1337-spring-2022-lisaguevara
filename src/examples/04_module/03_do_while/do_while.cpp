#include "do_while.h"
#include<iostream>

using std::cout, std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  

void prompt_user() {
    auto cont = 'n';
    do {
        cout << "Continue, enter y?";
        cin>>cont;
    } while (cont == 'y');
}

void display_menu() {
    cout << "1 Option 1\n";
    cout << "2 Option 2\n";
    cout << "3 Exit\n";
}

void run_menu() {
    auto option = 0;
    do {
        display_menu();
        cout << "Enter an option number: ";
        cin >> option;
    } while (option != 3);
}

void handle_menu_option(int option) {
    switch (option) {
        case 1:
            cout << "selected option 1 \n";
            break;
        case 2:
            cout << "selected option 2 \n";
            break;
        case 3:
            cout << "selected exit \n";
            break;
        default:
            cout << "Invalid entry";
    }
}