// Task: Ferenal

#include "ServiceQueue.h"
#include <iostream>
#include <string>

QueueNode::QueueNode(std::string name, std::string purp)
    : customerName(name), purpose(purp), next(nullptr) {}

ServiceQueue::ServiceQueue()
    : front_(nullptr), rear_(nullptr), count_(0) {}

ServiceQueue::~ServiceQueue() {
    while (!isEmpty()) {
        dequeue();
    }
}

void ServiceQueue::enqueue(const std::string& name, const std::string& purpose) {
    QueueNode* newNode = new QueueNode(name, purpose);

    if (isEmpty()) {
        front_ = newNode;
        rear_  = newNode;
    } else {
        rear_->next = newNode;
        rear_       = newNode;
    }

    ++count_;

    std::cout << "\n[QUEUE] Customer added to line.\n"
              << "  Name    : " << name    << "\n"
              << "  Purpose : " << purpose << "\n"
              << "  Position in line: " << count_ << "\n";
}

void ServiceQueue::dequeue() {
    if (isEmpty()) {
        std::cout << "\n[QUEUE] No customers in line.\n";
        return;
    }

    QueueNode* temp = front_;

    std::cout << "\n[QUEUE] Now serving customer.\n"
              << "  Name    : " << front_->customerName << "\n"
              << "  Purpose : " << front_->purpose      << "\n";

    front_ = front_->next;
    delete temp;
    --count_;

    if (front_ == nullptr) {
        rear_ = nullptr;
    }
}

void ServiceQueue::display() const {
    if (isEmpty()) {
        std::cout << "\n[QUEUE] No customers currently in line.\n";
        return;
    }

    std::cout << "\n[QUEUE] Customers in line (" << count_ << "):\n";
    std::cout << "  " << std::string(40, '-') << "\n";

    QueueNode* current = front_;
    int position = 1;
    while (current != nullptr) {
        std::cout << "  [" << position << "] "
                  << current->customerName
                  << " - " << current->purpose << "\n";
        current = current->next;
        position++;
    }

    std::cout << "  " << std::string(40, '-') << "\n";
}

bool ServiceQueue::isEmpty() const {
    return count_ == 0;
}

int ServiceQueue::size() const {
    return count_;
}