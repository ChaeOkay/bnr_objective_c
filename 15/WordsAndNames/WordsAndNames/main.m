//
//  main.m
//  WordsAndNames
//
//  Created by Chae O'Keefe on 2/23/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // Read words
        NSString *wordString
        = [NSString stringWithContentsOfFile:@"/usr/share/dict/words" encoding:NSUTF8StringEncoding error:NULL];

        // Break into array of strings
        NSArray *words = [wordString componentsSeparatedByString:@"\n"];
        
        NSInteger count = 0;
        
        // Iterate through array - faste enumeration
        for (NSString *w in words){
            
            // Identify the next word
            NSInteger next = [words indexOfObject:w] + 1;
            NSString *nextWord = [words objectAtIndex:next];
            
            // Compare
            if ([w caseInsensitiveCompare:nextWord] == NSOrderedSame) {
                count++;
                NSLog(@"%@ : %@", w, nextWord);
            }
        }
        
        NSLog(@"There are %lu matches", count);
    }
    return 0;
}

