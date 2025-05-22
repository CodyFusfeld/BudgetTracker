#ifndef UTILS_H
#define UTILS_H

#include "Transaction.h"
#include <vector>

void addTransaction(std::vector<Transaction>& transactions);
//Creates a vector called transactions that holds objects created from the Transaction class

void viewTransactions(const std::vector<Transaction>& transactions);

#endif