#ifndef OpStack_h
#define OpStack_h

// Define the Link struct below...

struct Link {

    long data;
    char op;
    Link*next;
    
};

// Now define the Stack struct. It should be a stack of Links...

struct Stack {

   Link*top;
   Stack(){
       top = nullptr;
   }

   void push(long data, char op){
       if(top==nullptr){
           top = new Link;
           top->data=data;
           top->op=op;
           top->next=nullptr;
       } else {
           Link*node=new Link;
           node->data=data;
           node->op=op;
           node->next=top;
           top=node;
       }
   }

   Link*pop(){
       if(isEmpty()){
           return nullptr;
       } else{
           Link*node=top;
           top=top->next;
           return node;
       }
   }

   bool isEmpty(){
       return(top == nullptr);
   }
};

#endif
