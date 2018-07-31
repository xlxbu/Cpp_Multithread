//
// Created by Liangxiao Xin on 7/30/18.
//

#include <iostream>
#include "Semaphore.h"

Semaphore::Semaphore(int _count)
            : count(_count) {}

void Semaphore::notify() {
    std::unique_lock<std::mutex> lock(mtx);
    count++;
    cv.notify_one();
}

void Semaphore::wait() {
    std::unique_lock<std::mutex> lock(mtx);

    while (count == 0){
        std::cout << "waiting lock!" << std::endl;
        cv.wait(lock);
    }
    count--;
}