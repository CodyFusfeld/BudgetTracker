#include <iostream>
#include <string>
#include "Transaction.h"
#include "utils.h"



void ProgramGreeting() {
    std::cout << "Welcome to the Budget Tracker" << std::endl;
    std::cout << "Developed by Cody Fusfeld" << std::endl;
    std::cout << std::endl;
}


int main() {
    ProgramGreeting();
    



    std::vector<Transaction> transactions;

    double amount;
    std::string category;
    std::string date;
    std::string accountNumber;

    int choice;
    bool SwitchLoop = true;

    while (SwitchLoop) {
        std::cout << "Main Menu" << std::endl;
        std::cout << "1. Add Transaction" << std::endl;
        std::cout << "2. View Transaction" << std::endl;
        std::cout << "3. Exit Program" << std::endl;
        std::cout << "Enter a choice: ";
        std::cin >> choice;
     

        

    switch(choice){
        case 1:
            addTransaction(transactions);
            break;
        case 2:
            viewTransactions(transactions);
            break;
        case 3:
            SwitchLoop = false;
            std::cout << "Thank you for Visitng" << std::endl;
            break;


        default:
            std::cout << "Invalid Choice, Please Select (1-3): " << std::endl;


    }

        
    }
    return 0;
}