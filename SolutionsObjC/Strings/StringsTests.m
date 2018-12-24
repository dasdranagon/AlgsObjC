//
//  StringsTests.m
//  SolutionsObjCTests
//
//  Created by Denis Skokov on 12/23/18.
//  Copyright © 2018 Denis Skokov. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "Strings.h"

@interface StringsTests : XCTestCase

@end

@implementation StringsTests


- (void)testFindNumberOfRepetition
{
    NSInteger result = NSNotFound;
    result = findNumberOfRepetition(@"", '1');
    XCTAssertEqual(result, 0);
    
    result = findNumberOfRepetition(@"1", '1');
    XCTAssertEqual(result, 1);
    
    result = findNumberOfRepetition(@"0", '1');
    XCTAssertEqual(result, 0);
    
    result = findNumberOfRepetition(@"1011134", '1');
    XCTAssertEqual(result, 4);
}

//- (void)testPerformanceExample {
//    // This is an example of a performance test case.
//    [self measureBlock:^{
//        // Put the code you want to measure the time of here.
//    }];
//}

@end
