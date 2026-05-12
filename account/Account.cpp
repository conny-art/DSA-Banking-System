// Task 1: Repolidon

#include "Account.h"

Account::Account(std::string accId, std::string accName, double initial) {
    id = accId;
    name = accName;
    bal = (initial >= 0) ? initial : 0;
}

void Account::add(double amt) {
    if (amt > 0) {
        bal += amt;
    }
}

bool Account::sub(double amt) {
    if (amt > 0 && amt <= bal) {
        bal -= amt;
        return true;
    }
    return false;
}

double Account::getBal() const {
    return bal;
}

std::string Account::getId() const {
    return id;
}

std::string Account::getName() const {
    return name;
}
