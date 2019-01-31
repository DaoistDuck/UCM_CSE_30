
#ifndef Queue_h
#define Queue_h

#include <string>

struct Link {
    std::string data;
    Link *next;
};

struct Queue {
    Link *head;
    Link *tail;

    Queue(){
        head = NULL;
        tail = NULL;
    }

    void push(std::string s){
        Link *n = new Link;
        n ->data = s;
        n ->next = NULL;
        if(head == NULL){
            head = tail = n;
        }
        else {
            tail ->next = n;
            tail = n;
        }
    }
    bool isEmpty(){
        return head == NULL;
    }

    std::string pop(){
        std::string data = head ->data;
        head = head->next;
        if(head == NULL){
            tail = NULL;
        }
        return data;
    }
};

#endif

