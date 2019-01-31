#include <iostream>
#include "OpStack.h"
using namespace std;

int main(){
    char choice;
    Stack s;
    long total = 0, num1;

    Link*popedEL;
    do{
        cout << "Enter \na. to read a long value \ns. Read a long value and subtract from running total \nz. undo the effect of last operation \nq. quit"<<endl;
        choice=cin.get();
        switch(choice){
            case 'a':
            cout << "Enter a long value: ";
            cin >>num1;
            total += num1;
            s.push(total, '+');
            break;

            case 's':
            if(s.isEmpty()){
                cout << "Stack is empty"<<endl;
            }else{
                cout<<"Enter a long value: ";
                cin >>num1;
                total -=num1;
                s.push(total, '-');
            }
            break;

            case 'z':
            popedEL=s.pop();
            if(popedEL==nullptr){
                cout<<"Nothing to undo" << endl;
            } else {
                total = popedEL->data;
                if(popedEL->op=='-'){
                    total=popedEL->data+num1;
                }
                if(popedEL->op=='+'){
                    total=popedEL->data-num1;
                }
                cout<<"undone operation " << popedEL->op <<endl;
            }
            break;

            case 'q':
            cout<<"exiting..."<<endl;
            break;
            default:
            cout<< "Invalid option, try again"<<endl;
        }
        cin.ignore();

    }while(choice !='q');
}