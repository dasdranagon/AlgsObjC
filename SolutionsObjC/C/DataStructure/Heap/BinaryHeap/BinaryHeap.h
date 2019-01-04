//
//  BinaryHeap.h
//  SolutionsObjC
//
//  Created by Denis Skokov on 1/4/19.
//  Copyright © 2019 Denis Skokov. All rights reserved.
//

#ifndef BinaryHeap_h
#define BinaryHeap_h

#include <stdio.h>

void maxHepify( int* heap, int size, int index);
void maxCreate( int* heap, int size);
void maxHeapSort( int* heap, int size);

void minHepify( int* heap, int size, int index);
void minCreate( int* heap, int size);
void minHeapSort( int* heap, int size);
#endif /* BinaryHeap_h */
