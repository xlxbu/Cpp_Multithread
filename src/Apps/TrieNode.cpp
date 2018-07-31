//
// Created by Liangxiao Xin on 6/26/18.
//

#include "TrieNode.h"
#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

template <class T>
TrieNode<T>::TrieNode(bool x, int y)
        : isword(x),
          val(y),
          next(vector<shared_ptr<TrieNode>>(26, nullptr)),
          prev(weak_ptr<TrieNode>()) {}

template <class T>
void TrieNode<T>::operator()(bool x, int y) {
    isword = x;
    val = y;
    next = vector<shared_ptr<TrieNode>>(26, nullptr);
    prev = weak_ptr<TrieNode>();
}

template <class T>
TrieNode<T>::~TrieNode() {
    cout << "delete trie node " << val << endl;
}

template <class T>
void TrieNode<T>::writedata(T param) {
    data = param;
    this_thread::sleep_for(chrono::seconds(5));
}

template <class T>
T TrieNode<T>::readdata() {
    return data;
}

