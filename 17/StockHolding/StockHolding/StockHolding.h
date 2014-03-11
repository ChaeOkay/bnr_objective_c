//
//  StockHolding.h
//  StockHolding
//
//  Created by Chae O'Keefe on 3/10/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StockHolding : NSObject
{
    float purchasePrice;
    float currentPrice;
    int numberOfShares;
    NSString *name;
}
@property float purchasePrice;
@property float currentPrice;
@property int numberOfShares;
@property NSString *name;

- (float)costInDollars;
- (float)valueInDollars;
@end
