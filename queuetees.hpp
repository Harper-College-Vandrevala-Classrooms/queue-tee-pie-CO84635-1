#ifndef QUEUETEES_H
#define QUEUETEES_H
#include "cutie.hpp"
#include <iostream>

class QueueTees {
private:
    Cutie** items;
    int front, rear, size, capacity;

    bool is_empty() {
        return size == 0;
    }

    bool is_full() {
        return size == capacity;
    }

public:
    QueueTees(int capacity) {
        this->capacity = capacity;
        this->items = new Cutie*[capacity];
        this->front = 0;
        this->rear = -1;
        this->size = 0;    
    }

    int get_size() {
        return size;
    }

    void enqueue(Cutie* cutie) {
        if (is_full()) {
            std::cout << "The Queue is full!" << std::endl;
            return;
        }
        rear++;
        items[rear] = cutie;
        size++;
        std::cout << "Enqueued the cutie with the description: \"" 
             << cutie->description() << "\", with a rating of " 
             << cutie->cuteness_rating() << "." << std::endl; 
    }

    Cutie* dequeue() {
        if (is_empty()) {
            std::cout << "The Queue is empty!" << std::endl;
            return nullptr;
        } else {
            Cutie* cutie = items[front];
            front++;
            size--; 

            if (size == 0) {
                front = 0;
                rear = -1;
            }

            std::cout << "Dequeued the cutie with the description: " 
            << cutie->description() 
            << ", with a rating of " 
            << cutie->cuteness_rating() << "." << std::endl;
            return cutie;
        }
    }
};

#endif // QUEUETEES_H