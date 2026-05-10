// Task 4: Ferenal
#include "ServiceQueue.h"
#include <iostream>
#include <iomanip>
 
QueueNode::QueueNode(const Transaction& t)
    : data(t), next(nullptr) {}
 
ServiceQueue::ServiceQueue()
    : front_(nullptr), rear_(nullptr), count_(0) {}
 
ServiceQueue::~ServiceQueue() {}
 
void ServiceQueue::enqueue(const Transaction& transaction) {
    QueueNode* newNode = new QueueNode(transaction);
 
    if (isEmpty()) {
        front_ = newNode;
        rear_  = newNode;
    } else {
        rear_->next = newNode;
        rear_       = newNode;
    }
 
    ++count_;
 
    std::cout << "\n[QUEUE] Customer added to line.\n"
              << "  Account : " << transaction.getAccountNumber() << "\n"
              << "  Type    : " << transaction.getType()          << "\n"
              << "  Amount  : PHP "
              << std::fixed << std::setprecision(2) << transaction.getAmount() << "\n"
              << "  Position in line: " << count_ << "\n";
}
 
bool ServiceQueue::isEmpty() const {
    return count_ == 0;
}
 
int ServiceQueue::size() const {
    return count_;
}
=