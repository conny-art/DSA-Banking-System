// Task 4: Ferenal
#pragma once
#include <string>
#include "../transaction/Transaction.h"
 
struct QueueNode {
    Transaction data;
    QueueNode*  next;
 
    explicit QueueNode(const Transaction& t);
};
 
class ServiceQueue {
public:
    ServiceQueue();
    ~ServiceQueue();
 
    ServiceQueue(const ServiceQueue&)            = delete;
    ServiceQueue& operator=(const ServiceQueue&) = delete;
 
    void enqueue(const Transaction& transaction);
    bool isEmpty() const;
    int  size()    const;
 
private:
    QueueNode* front_;
    QueueNode* rear_;
    int        count_;
};
 