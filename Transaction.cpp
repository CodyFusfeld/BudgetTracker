#include <iostream>
#include "Transaction.h"
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>

Transaction::Transaction(double amt, std::string cat, std::string dt, std::string acct) : amount(amt), category(cat), date(dt), accountNumber(acct){}
Transaction::Transaction() : amount(0.0), category(""), date(""), accountNumber("") {}


void Transaction::display() const {
    std::ostringstream amountStream;
    amountStream << "$" << std::fixed << std::setprecision(2) << amount;

    std::cout << "|" << std::left << std::setw(19) << accountNumber
    << std::left << std::setw(15) << amountStream.str()
    << std::left << std::setw(15) << category 
    << date << '|' << std::endl;
}


