//
//  ECUser.h
//  ProximityShared
//
//  Created by encircle.io on 12/05/15.
//  Copyright (c) 2015 encircle.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ECBaseModel.h"

@interface ECConsumer : ECBaseModel

@property (nonatomic, copy) NSString *consumerId;
@property (nonatomic, copy) NSString *consumerName;
@property (nonatomic) NSInteger loyaltyPoints;

@property (nonatomic, copy) NSString *email;
@property (nonatomic) NSInteger *ageGroup;
@property (nonatomic) NSInteger *gender;


@property (nonatomic, copy) NSArray *tags;
@property (nonatomic, copy) NSDictionary *customProperties;
@property (nonatomic) NSInteger cId;

@property (nonatomic, assign, getter=isSyncPending) BOOL syncPending;

// Singleton
+ (instancetype)sharedInstance;

- (instancetype)initWithConsumerId:(NSString *)consumerId consumerName:(NSString *)consumerName;
- (void)updateWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)getDictionary;

- (void)syncIfRequired;

@end
