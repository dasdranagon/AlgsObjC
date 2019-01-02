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

- (void)testFindMaxRepetition
{
    int repetition;
    char character;
    
    findMaxRepetition(@"", &character, &repetition);
    XCTAssertEqual(repetition, 0);
    XCTAssertEqual(character, 0);
    
    findMaxRepetition(@"111", &character, &repetition);
    XCTAssertEqual(repetition, 3);
    XCTAssertEqual(character, '1');
    
    findMaxRepetition(@"2222111", &character, &repetition);
    XCTAssertEqual(repetition, 4);
    XCTAssertEqual(character, '2');
    
    findMaxRepetition(@"1113333222", &character, &repetition);
    XCTAssertEqual(repetition, 4);
    XCTAssertEqual(character, '3');
    
    findMaxRepetition(@"111333322255555", &character, &repetition);
    XCTAssertEqual(repetition, 5);
    XCTAssertEqual(character, '5');
}

@end
