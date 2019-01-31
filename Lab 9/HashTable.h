#ifndef HashTable_h
#define HashTable_h

#include "Queue.h"
#include <vector>
#include <iostream>

using namespace std;

struct HashTable {
    long size;

    vector<Queue*> hashtable;

    HashTable() {
        size = 10;
        for (long i = 0; i < size; i++) {
            hashtable.push_back(new Queue());
        }
    }

    HashTable (long value) {
        size = value;
        for (long i = 0; i < size; i++) {
            hashtable.push_back(new Queue());
        }
    }

    long f (long x){
        return x % size;
    }

    void insert (long value) {
        long index = f(value);
        hashtable[index]->push(value);
    }

    bool find (long value) {
        long index = f(value);
        return hashtable[index]->find(value); 
    }

    void print() {
        for (long i = 0; i < size; i++) {
            cout << i << ": ";

            hashtable[i]->print();
            cout << endl;
        }
    }

    ~HashTable(){
        for (long i = 0; i < size; i++) {
            delete hashtable[i];
        }
    }
};

#endif