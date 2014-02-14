//
//  main.m
//  SayMyName
//
//  Created by Chae O'Keefe on 2/13/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NSString *sayEvaluation(NSString *x, NSString *y)
{
    if ([y isEqual:x]) {
        NSLog(@"%@ and %@ are equal", y, x);
    } else {
        NSLog(@"%@\n", y);
        NSLog(@"%@\n", x);
    }
    NSLog(@"\n");
    return 0;
};

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSString *y = [NSString stringWithFormat:@"Bye %d", 5];
        NSUInteger yCount = [y length];
        NSLog(@"YCount is %lu\n", yCount);
        
        NSString *x = [NSString stringWithFormat:@"Bye %d", 5];
        NSUInteger xCount = [x length];
        NSLog(@"XCount is %lu\n\n", xCount);

        sayEvaluation(x, y);
        
        NSString *word1 = @"kittens";
        NSString *string1 = [NSString stringWithFormat:@"I love %@", word1];
        NSUInteger word1Count = [word1 length];
        NSLog(@"%@ is %lu\n", word1, word1Count);
        
        NSString *word2 = @"puppies";
        NSString *string2 = [NSString stringWithFormat:@"I love %@", word2];
        NSUInteger word2Count = [word2 length];
        NSLog(@"%@ is %lu\n", word2, word2Count);
        
        sayEvaluation(string1, string2);
        
    }
    return 0;
}

