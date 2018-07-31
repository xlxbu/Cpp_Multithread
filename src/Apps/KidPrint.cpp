//
// Created by Liangxiao Xin on 7/30/18.
//

#include <iostream>
#include "KidPrint.h"

KidPrint::KidPrint(std::string s)
        : MyPrint(-1),
          p(s) {
    std::cout << "KidPrint constructor: " << s << std::endl;
}

KidPrint::~KidPrint() {
    std::cout << "KidPrint ends!" << std::endl;
}
