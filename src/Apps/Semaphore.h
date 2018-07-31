//
// Created by Liangxiao Xin on 7/30/18.
//

#ifndef MULTITHREAD_SEMAPHORE_H
#define MULTITHREAD_SEMAPHORE_H

#include <mutex>
#include <condition_variable>

class Semaphore {
public:
    Semaphore(int _count = 0);
    void notify();
    void wait();

private:
    std::mutex mtx;
    std::condition_variable cv;
    int count;
};


#endif //MULTITHREAD_SEMAPHORE_H
