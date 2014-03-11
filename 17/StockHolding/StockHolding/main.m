//
//  main.m
//  StockHolding
//
//  Created by Chae O'Keefe on 3/10/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StockHolding.h"

void printReport(NSString *accountName, int shares, float purchasePrice, float currentPrice, float cost, float value)
{
    NSLog(@"%@ has %d shares:\n"
            "The original cost when purchased at %f per share, is: %f\n"
            "The current cost at %f per share, is: %f\n\n",
          accountName, shares, purchasePrice, cost, currentPrice, value);
}

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        StockHolding *account1 = [[StockHolding alloc] init];
        [account1 setName:@"account 1"];
        [account1 setPurchasePrice:2.30];
        [account1 setCurrentPrice:4.50];
        [account1 setNumberOfShares:40];
        
        StockHolding *account2 = [[StockHolding alloc] init];
        [account2 setName:@"account 2"];
        [account2 setPurchasePrice:12.19];
        [account2 setCurrentPrice:10.56];
        [account2 setNumberOfShares:90];
        
        StockHolding *account3 = [[StockHolding alloc] init];
        [account3 setName:@"account 3"];
        [account3 setPurchasePrice:45.10];
        [account3 setCurrentPrice:49.51];
        [account3 setNumberOfShares:210];
        
        NSArray *accounts = [NSArray arrayWithObjects:account1, account2, account3, nil];
        NSUInteger counter = [accounts count];
        
        for (int i = 0; i < counter; i++) {
            float purchasedCost = [[accounts objectAtIndex:i] costInDollars];
            float currentValue = [[accounts objectAtIndex:i] valueInDollars];
            
            printReport([[accounts objectAtIndex:i] name], [[accounts objectAtIndex:i] numberOfShares], [[accounts objectAtIndex:i] purchasePrice], [[accounts objectAtIndex:i] currentPrice], purchasedCost, currentValue);
        }
        
    }
    return 0;
}

