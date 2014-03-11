//
//  StockHolding.m
//  StockHolding
//
//  Created by Chae O'Keefe on 3/10/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import "StockHolding.h"

@implementation StockHolding

@synthesize purchasePrice, currentPrice, numberOfShares, name;

- (float)costInDollars
{
    float purchaseSharePrice = [self purchasePrice];
    float shares = [self numberOfShares];
    return (purchaseSharePrice * shares);
}
- (float)valueInDollars
{
    float currentSharePrice = [self currentPrice];
    float shares = [self numberOfShares];
    return (currentSharePrice * shares);
}

@end
