//
//  CArray.c
//  SolutionsObjC
//
//  Created by Denis Skokov on 1/2/19.
//  Copyright © 2019 Denis Skokov. All rights reserved.
//

#include "CArray.h"
#include <stdio.h>
#include <stdlib.h>

// -- sample

char* findNumber(int arr_count, int* arr, int k) {
    for( int i = 0; i < arr_count; i ++) {
        if ( arr[i] == k ) {
            return "YES";
        }
    }
    return "NO";
}

int* oddNumbers(int l, int r, int* result_count) {
    int max_count = (r - l) / 2 + 1;
    int *buff = malloc(max_count * sizeof(int));
    int start_number = l;
    if( l % 2 == 0 ) {
        start_number = l + 1;
    }
    
    *result_count = 0;
    for ( int i = start_number ; i <= r ; i += 2) {
        buff[*result_count] = i;
        *result_count += 1;
    }
    return buff;
}

// -- warming up
