//
// Created by Liangxiao Xin on 6/26/18.
//

#include "MyPrint.h"
#include <iostream>
#include <string>

using namespace std;

void
MyPrint::myPrint(int x){
  cout << "hello " << to_string(x) << endl;
}

MyPrint::~MyPrint() {
  cout << "MyPrint ends!" << endl;
}
