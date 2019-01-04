//
//  BinaryHeap.c
//  SolutionsObjC
//
//  Created by Denis Skokov on 1/4/19.
//  Copyright © 2019 Denis Skokov. All rights reserved.
//

#include "BinaryHeap.h"

// MAX
void maxHepify( int* heap, int size, int index) {
    int leftIndex = index*2 + 1;
    int rightIndex = index*2 + 2;
    
    int maxChildIndex = leftIndex;
    if (rightIndex < size) {
        if (heap[rightIndex] > heap[leftIndex]) {
            maxChildIndex = rightIndex;
        }
    };
    
    if (maxChildIndex < size) {
        if (heap[index] < heap[maxChildIndex]) {
            int newValue = heap[maxChildIndex];
            heap[maxChildIndex] = heap[index];
            heap[index] = newValue;
            maxHepify(heap, size, maxChildIndex);
        }
    }
}

void maxCreate( int* heap, int size) {
    for ( int i = size / 2 + 1 ; i >= 0; i -- ) {
        maxHepify(heap, size, i);
    }
}

void maxHeapSort( int* heap, int size) {
    maxCreate(heap, size);
    for( int i = 0; i < size; i ++ ) {
        int lastIndex = size - i - 1;
        int tmp = heap[0];
        heap[0] = heap[lastIndex];
        heap[lastIndex] = tmp;
        
        maxHepify(heap, lastIndex, 0);
    }
}

// MIN
void minHepify( int* heap, int size, int index) {
    int leftIndex = index*2 + 1;
    int rightIndex = index*2 + 2;
    
    int minChildIndex = leftIndex;
    if (rightIndex < size) {
        if (heap[rightIndex] < heap[leftIndex]) {
            minChildIndex = rightIndex;
        }
    };
    
    if (minChildIndex < size) {
        if (heap[index] > heap[minChildIndex]) {
            int newValue = heap[minChildIndex];
            heap[minChildIndex] = heap[index];
            heap[index] = newValue;
            minHepify(heap, size, minChildIndex);
        }
    }
}

void minCreate( int* heap, int size) {
    for ( int i = size / 2 + 1 ; i >= 0; i -- ) {
        minHepify(heap, size, i);
    }
}

void minHeapSort( int* heap, int size) {
    minCreate(heap, size);
    for( int i = 0; i < size; i ++ ) {
        int lastIndex = size - i - 1;
        int tmp = heap[0];
        heap[0] = heap[lastIndex];
        heap[lastIndex] = tmp;
        
        minHepify(heap, lastIndex, 0);
    }
}
