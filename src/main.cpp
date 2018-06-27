#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include "Apps/MyPrint.h"
#include "Apps/TrieNode.h"
#include "Apps/TrieNode.cpp"

using namespace std;


void start_multiple_thread() {
    shared_ptr<TrieNode<int>> th1_node  = make_shared<TrieNode<int>>(false, 10);
    thread th1(&TrieNode<int>::writedata, th1_node, 10);
    shared_ptr<TrieNode<int>> th2_node  = make_shared<TrieNode<int>>(false, 20);
    thread th2(&TrieNode<int>::writedata, th2_node, 20);
    th1.join();
    th2.join();
}

int main() {
    shared_ptr<MyPrint> a = make_shared<MyPrint>();
    vector<int> nums;
    for(int i=0; i<10; i++){
        nums.push_back(i);
    }

    /*create a Trie node using normal pointer, it does not automatically delete the pointer after running code*/
    TrieNode<int>* normal_root = new TrieNode<int>(true, 0); // memory leakage!

    /*create a Trie node using unique pointer, which cannot be shared with others*/
    unique_ptr<TrieNode<string>> unique_root = make_unique<TrieNode<string>>(true, 1);
//    shared_ptr<TrieNode> shared_unique_root(unique_root); //uncommit -> error occurs

    /*create two Trie nodes using shared pointer*/
    shared_ptr<TrieNode<int>> root = make_shared<TrieNode<int>>(false, 2);
    root->next[0] = make_shared<TrieNode<int>>(false, 3);
    shared_ptr<TrieNode<int>> shared_root(root);
    root->next[0]->prev = root; //weak pointer
    /*root and shared_root share the pointer, both of them will be deleted after running the code*/
    root->isword = true;
    shared_root->isword = false;
    cout << "root is word? " << boolalpha << root->isword << endl;

    /*if there is a loop in the tree, then the shared points can't be deleted after running the code
     * try it by uncomment the following line of code*/
//    root->next[0]->next[0] = root;


//    thread th2 = thread(TrieNode<string>(false, 20));
    start_multiple_thread();

    cout << "the data in root is: " << root->readdata() << endl;
    unique_root->writedata("11");
    cout << "the data in root is: " << unique_root->readdata() << endl;



    return 0;
}