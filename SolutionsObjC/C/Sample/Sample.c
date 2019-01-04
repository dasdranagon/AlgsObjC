//
//  Sample.c
//  SolutionsObjC
//
//  Created by Denis Skokov on 1/2/19.
//  Copyright © 2019 Denis Skokov. All rights reserved.
//

#include "Sample.h"
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

int sockMerchant(int n, int ar_count, int* ar) {
    int *colors = malloc(101 * sizeof(int));
    for (int i = 0; i < 101; i++) {
        colors[i] = 0;
    }
    
    int pairsCount = 0;
    for ( int i = 0 ; i < n ; i ++ ) {
        int color = ar[i];
        colors[color] = (colors[color] + 1) % 2;
        if (colors[color] == 0) { pairsCount++; }
    }
    
    free(colors);
    return pairsCount;
}

int jumpingOnClouds(int c_count, int* c) {
    
    int jumps = 0;
    int current = 0;
    int last = c_count - 1;
    do {
        if (c[current + 2] == 0 && current + 2 <= last) {
            current += 2;
        } else {
            current += 1;
        }
        jumps ++;
    } while(current < last);
    
    return jumps;
}

int countingValleys(int n, char* s) {
    int elevation = 0;
    int valleysCount = 0;
    for( int i = 0 ; i < n ; i ++ ) {
        int previousElevation = elevation;
        if ( s[i] == 'U') {
            elevation ++;
        } else {
            elevation --;
        }
        
        if(elevation == 0 && previousElevation < 0) {
            valleysCount ++;
        }
    }
    
    return valleysCount;
}
