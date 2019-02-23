//
// Created by shaojian on 19-1-8.
//

#ifndef TEST_ANYTHING_QUEUE_H
#define TEST_ANYTHING_QUEUE_H

#include <queue>


template <typename E>  // E is the element type.
class Queue {
public:
    Queue();
    void Enqueue(const E& element);
    E* Dequeue();  // Returns NULL if the queue is empty.
    std::size_t size() const;

private:
    std::queue<E> q;
};

template<typename E>
Queue<E>::Queue() {

}

template<typename E>
void Queue<E>::Enqueue(const E &element) {
    q.push(element);
}

template<typename E>
E *Queue<E>::Dequeue() {
    if (q.empty()) return nullptr;

    auto ret = q.front();
    q.pop();

    return new E{ret};
}

template<typename E>
std::size_t Queue<E>::size() const {
    return q.size();
}


#endif //TEST_ANYTHING_QUEUE_H
