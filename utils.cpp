#include <iostream>
#include "utils.h"
#include <string>
#include <limits>
#include <iomanip>

void addTransaction(std::vector<Transaction>& transactions){
    double amount;
    std::string category;
    std::string date;
    std::string accountNumber;

    std::cout << "What is the Account Number: " <<std::endl;
    std::cin >> accountNumber;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "What Amount would you like to Deposit: " <<std::endl;
    std::cin >> amount;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "What Category does this Transaction fall into: " <<std::endl;
    std::cin >> category;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "When is this Transaction taking Place: " <<std::endl;
    std::cin >> date;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Transaction successfully added.\n";

    
    //creates an object from the Transaction class with four parameters
    Transaction T1(amount, category, date, accountNumber);


    //stores object in the transaction vector
    transactions.push_back(T1);
   
}

void viewTransactions(const std::vector<Transaction>& transactions) {
    if (transactions.empty()) {
        std::cout << "No transactions available.\n";
        return;
    }

        
        std::cout << std::left
              << std::setw(16) << "Account Number"
              << std::setw(8)  << "Amount"
              << std::setw(16) << "Category"
              << std::setw(16) << "Date"
              << std::endl;
    std::cout << std::string(56, '-') << "\n";
    // ...existing code...


    for (const auto& T1 : transactions) {
        T1.display(); // calls public method
    }
}

