#include <iostream>
#include "utils.h"
#include <string>

void addTransaction(std::vector<Transaction>& transactions){
    double amount;
    std::string category;
    std::string date;
    std::string accountNumber;

    std::cout << "What is the Account Number: " <<std::endl;
    std::cin >> accountNumber;

    std::cout << "What Amount would you like to Deposit: " <<std::endl;
    std::cin >> amount;

    std::cout << "What Category does this Transaction fall into: " <<std::endl;
    std::cin >> category;

    std::cout << "When is this Transaction taking Place: " <<std::endl;
    std::cin >> date;
    
    Transaction T1(amount, category, date, accountNumber);

    transactions.push_back(T1);
   
}