// Task: Ferenal

#pragma once
#include <string>
 
struct QueueNode {
    std::string customerName;
    std::string purpose;
    QueueNode*  next;
 
    QueueNode(std::string name, std::string purp);
};
 
class ServiceQueue {
public:
    ServiceQueue();
    ~ServiceQueue();
 
    ServiceQueue(const ServiceQueue&)            = delete;
    ServiceQueue& operator=(const ServiceQueue&) = delete;
 
    void enqueue(const std::string& name, const std::string& purpose);
    void dequeue();
    void display() const;
    bool isEmpty() const;
    int  size()    const;
 
private:
    QueueNode* front_;
    QueueNode* rear_;
    int        count_;
};
 