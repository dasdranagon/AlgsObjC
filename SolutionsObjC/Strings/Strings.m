//
//  Strings.m
//  SolutionsObjC
//
//  Created by Denis Skokov on 12/22/18.
//  Copyright © 2018 Denis Skokov. All rights reserved.
//

#import "Strings.h"

typedef void (^EnumerateHandler)(NSInteger idx, char ch);
void enumerate(NSString *str, EnumerateHandler handler);

NSInteger findNumberOfRepetition(NSString *string, char caracter) {
    if( string.length == 0) return 0;

    __block NSInteger count = 0;
    enumerate(string, ^(NSInteger idx, char ch) {
        if( ch == caracter ) {
            count ++;
        }
    });
    
    return count;
}

void findMaxRepetition(NSString *string, char* character, int* repetitions) {
    *character = 0;
    *repetitions = 0;
    
    __block int currentCount = 0;
    __block char currentCharacter = 0;
    enumerate(string, ^(NSInteger idx, char ch) {
        if (currentCharacter != ch) {
            if ( currentCount > *repetitions) {
                *repetitions = currentCount;
                *character = currentCharacter;
            }
            
            currentCount = 0;
            currentCharacter = ch;
        }
        
        currentCount ++;
    });
    
    if ( currentCount > *repetitions) {
        *repetitions = currentCount;
        *character = currentCharacter;
    }
}

#pragma mark -
void enumerate(NSString *str, EnumerateHandler handler) {
    if( str.length == 0) return;
    
    NSUInteger length = [str length];
    unichar cString[length];
    [str getCharacters:cString range:NSMakeRange(0, length)];
    
    for( int i = 0 ; i < length ; i ++ ) {
        char c = cString[i];
        handler(i, c);
    }
}
