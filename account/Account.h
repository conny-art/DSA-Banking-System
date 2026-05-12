// Task 1: Repolidon

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string id;
    std::string name;
    double bal;

public:
    Account(std::string accId, std::string accName, double initial);
    
    void add(double amt);
    bool sub(double amt);
    
    double getBal() const;
    std::string getId() const;
    std::string getName() const;
};

#endif
