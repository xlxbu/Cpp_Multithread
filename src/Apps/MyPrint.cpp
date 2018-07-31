//
// Created by Liangxiao Xin on 6/26/18.
//

#include "MyPrint.h"
#include <iostream>
#include <string>

using namespace std;

MyPrint::MyPrint(int x) {
  cout << "MyPrint construtor: " << to_string(x) << endl;
}

void
MyPrint::myPrint(int x){
  cout << "hello " << to_string(x) << endl;
}

MyPrint::~MyPrint() {
  cout << "MyPrint ends!" << endl;
}
