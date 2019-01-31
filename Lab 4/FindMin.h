#ifndef FindMin_h
#define FindMin_h

// Declare and define the findMin function here
int findMin(int numbers[], int start, int end){
    int begin = numbers[start];
    int endpos = start;
    for(int i = start; i < end; i ++){
        if(numbers[i] < begin){
            begin = numbers[i];
            endpos = i;
        }
    }
    return endpos;
    
}

// Do not write any code below this line
#endif