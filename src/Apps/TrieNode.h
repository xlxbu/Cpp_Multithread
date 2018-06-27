//
// Created by Liangxiao Xin on 6/26/18.
//

#include <vector>

#ifndef MULTITHREAD_TRIENODE_H
#define MULTITHREAD_TRIENODE_H

using namespace std;

template <class T>
class TrieNode {
public:
    bool isword;
    vector<shared_ptr<TrieNode>> next;
    weak_ptr<TrieNode> prev;
    TrieNode(bool x, int y);
    virtual ~TrieNode();
    T data;

    void writedata(T param);
    T readdata();

private:
    int val;
};


#endif //MULTITHREAD_TRIENODE_H
