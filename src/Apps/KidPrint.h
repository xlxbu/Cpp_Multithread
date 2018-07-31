//
// Created by Liangxiao Xin on 7/30/18.
//

#ifndef MULTITHREAD_KIDPRINT_H
#define MULTITHREAD_KIDPRINT_H

#include <string>
#include "MyPrint.h"

class KidPrint : public MyPrint {
public:
    KidPrint(std::string s);
    virtual ~KidPrint();

private:
    std::string p;
};


#endif //MULTITHREAD_KIDPRINT_H
