#include<iostream>
#include "BST.h"
#include "RandomSupport.h"
#include "BSTUtil.h"

int main()
{
    long N, value;
    std::cin>>N;//Read value from keyboard
    Node *root = nullptr;//Create empty BST
    randomizer gen = new_randomizer();//Initialize random number generator
    uniform_distribution dist = new_distribution(1, N);//Uniform distritubution over values between 1 and N
    for(int i = 0; i < N; i++)//Loop to generate N random values
    {
        value = sample(dist, gen);//Get a random value between 1 and N
        root = insert(root, value);//Insert random value into BST
    }
    //Calling functions defined in BSTUtil.h
    root = insertSpecialNumber(root);
    findSpecialNumber(root);
    return 0;
}

 