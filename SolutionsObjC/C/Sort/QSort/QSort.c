//
//  QSort.c
//  SolutionsObjC
//
//  Created by Denis Skokov on 1/4/19.
//  Copyright © 2019 Denis Skokov. All rights reserved.
//

#include "QSort.h"

typedef struct {
    int *array;
    int start;
    int end;
} range;

int compare(int l, int r);
void sortRange(range r);
void quickSort(int *arr, int count) {
    if ( count == 0 ) { return; }
    
    range r;
    r.array = arr;
    r.start = 0;
    r.end = count - 1;
    sortRange(r);
}

void sortRange(range r) {
    if (r.start == r.end) { return; }
    
    int midIdx = r.start + (r.end - r.start) / 2;
    int mid = r.array[midIdx];
    
    int firstIdx = r.start;
    int lastIdx = r.end;
    
    while (firstIdx != lastIdx) {
        int first = r.array[firstIdx];
        int last = r.array[lastIdx];
        
        if (!compare(first, mid)) {
            while(compare(last, mid)) {
                
            }
        }
    }
}

int compare(int l, int r) {
    return l > r;
}
