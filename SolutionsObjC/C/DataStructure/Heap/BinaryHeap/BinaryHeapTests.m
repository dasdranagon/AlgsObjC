//
//  BinaryHeapTests.m
//  SolutionsObjCTests
//
//  Created by Denis Skokov on 1/4/19.
//  Copyright © 2019 Denis Skokov. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "BinaryHeap.h"

@interface BinaryHeapTests : XCTestCase {
    int* arr;
    int count;
}
@end

@implementation BinaryHeapTests

- (void)setUp {
    count = 11;
    arr = malloc(count * sizeof(int));
    arr[0] = 2;
    arr[1] = 1;
    arr[2] = 4;
    arr[3] = 5;
    arr[4] = 1;
    arr[5] = 2;
    arr[6] = 6;
    arr[7] = 7;
    arr[8] = 1;
    arr[9] = 3;
    arr[10] = 0;
}

- (void)tearDown {
    printf("\n");
    for( int i = 0 ; i < count ; i ++ ) {
        printf("%i ", arr[i]);
    }
    printf("\n");
    
    free(arr);
}

- (void)testMaxCreate {
    printf("create max binary heap\n");
    maxCreate(arr, count);
}

- (void)testMinCreate {
    printf("create min binary heap\n");
    minCreate(arr, count);
}

- (void)testMaxSort {
    printf("max heap sort\n");
    maxHeapSort(arr, count);
}

- (void)testMinSort {
    printf("min heap sort\n");
    minHeapSort(arr, count);
}

@end
