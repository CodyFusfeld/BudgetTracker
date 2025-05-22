#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <string>

class Transaction{
    private:
    //What Data a Transaction Has
        double amount;
        std::string category;
        std::string date;
        std::string accountNumber;
    public:
        Transaction(double amt, std::string cat, std::string dt, std::string acctNum);  //Constructor
        Transaction(); // default constructor
        void display() const;
};




#endif