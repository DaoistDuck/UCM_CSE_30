#ifndef arraySupport_h
#define arraySupport_h

// A function to get the value at a specific position
int getIndex(int* list, int pos){
    // Provide your code here...
    int i;
        for(i = 0; i < pos; i++){
            if(i == pos){
                list[i] = list[i];
            }
        }

        return list[i];
}
#endif