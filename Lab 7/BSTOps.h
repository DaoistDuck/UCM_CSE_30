#ifndef BSTOps_h
#define BSTOps_h

#include "BSTComplete.h"

int occurrences(Node* root, int value){
    // Provide your code here
    if (root == NULL){
        return 0;
    }
    else{
        // If the current node is not NULL,
        // then there is still a chance we
        // may be able to find what we seek
        if (root->data == value){
            // If we see the value we want, we will increment count and search for remaining
            return 1+occurrences(root->right, value) + occurrences (root->left, value);
        }
        else if (value < root->data) {
            // If the value we want is smaller
            // we search for it on the left
            return occurrences(root->left, value);
        }
        else{
            // Otherwise search for it on the right
            return occurrences(root->right, value);
        }
    }
}

#endif

 