//
//  QSortTests.m
//  SolutionsObjCTests
//
//  Created by Denis Skokov on 1/4/19.
//  Copyright © 2019 Denis Skokov. All rights reserved.
//

#import <XCTest/XCTest.h>

@interface QSortTests : XCTestCase {
    int* arr;
    int count;
}

@end

@implementation QSortTests

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

- (void)testSort {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
}

@end
