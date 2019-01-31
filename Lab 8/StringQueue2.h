
#ifndef Queue_h
#define Queue_h

#include <string>

struct Link {
    std::string data;
    Link *next;
};

struct Queue {
    struct Link *head, *t;
    Queue():head(NULL){}
    void push(string name){
        if(head == NULL){
            head = (struct Link *)malloc(1*sizeof(struct Link));
            head ->str=name;
            head ->next=NULL;
        }
        else{
            struct Link *temp;
            temp = (struct Link *)malloc(1*sizeof(struct Link));
            temp ->str=name;
            temp ->next=NULL;
            t=head;
            while(t->next != NULL)
            {
                t = t->next;
            }
            t ->next = temp;
        }
        std::cout << name << " arrived" << std::endl;
    }
    void pop()
    {
        if(head == NULL){
            std::cout << "No customers waiting" << std::endl;
        } else{
            std::cout << "Now serving: " << head ->str << std::endl;
            head = head -> next;
        }
    }
    void next(){
        if(head == NULL){
            std::cout << "The waiting list is empty" << std::endl;
        } else {
            std::cout << "Next in line: " << head ->str << std::endl;
        }
    }
    void quit(){
        if(head == NULL){
            std::cout << "Closing up now." << std::endl;
        } else {
            std::cout << "Come back tomorrow: " << std::endl;
            t = head;
            std::cout << t->str << std::endl;
            while(t ->next != NULL){
                t = t ->next;
                std::cout << t -> str << std::endl;
            }
            std::cout << "Closing up now." << std::endl;
        }
    }
};

#endif

