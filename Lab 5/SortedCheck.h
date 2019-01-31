#ifndef SortedCheck_h
#define SortedCheck_h

bool sortedCheck(long* list, long size){
    // Provide your code here...
    int i = 0;
    int element;
    list[i] = element;
    for(i = 0; i < size; i ++){
        if(element > list[i+1]){
            return false;
        }
    }
    return true;
}

#endif 