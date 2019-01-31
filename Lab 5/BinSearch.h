#ifndef BinSearch_h
#define BinSearch_h

long binSearch(long* list, long n, long val){
    int left = 0;
    int right = n-1;
    int mid;
    while(left < right) {
        mid = (left+right)/2;
        if(list[mid] == val) {
            return mid;
        } else if(val < list[mid]) {
            right = mid-1;
        } else {
            left = mid+1;
        }
    }
    if(list[left] == val) {
        return left;
    }
    return -1;
}

#endif