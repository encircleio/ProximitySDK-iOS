//
//  Created by encircle.io on 12/05/15.
//  Copyright (c) 2015 encircle.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ECBaseModel.h"

typedef NS_ENUM(NSInteger, ECGender) {
    ECMale = 0,
    ECFemale = 1,
};

typedef NS_ENUM(NSInteger, ECAgeGroup) {
    ECTeenagers = 0,
    ECYoungAdults = 1,
    ECMiddleAge = 2,
    ECSeniorCitizen = 3,
};

@interface ECConsumer : ECBaseModel

//Properties
@property (nonatomic, copy) NSString *consumerId;
@property (nonatomic, copy) NSString *consumerName;
@property (nonatomic) NSInteger loyaltyPoints;
@property (nonatomic, copy) NSString *email;
@property (nonatomic) NSInteger ageGroup;
@property (nonatomic) NSInteger gender;
@property (nonatomic, copy) NSArray *tags;
@property (nonatomic, copy) NSDictionary *customProperties;
@property (nonatomic) NSInteger cId;
@property (nonatomic, assign, getter=isSyncPending) BOOL syncPending;

// Singleton
+ (instancetype)sharedInstance;

//Public Methods
- (instancetype)initWithConsumerId:(NSString *)consumerId consumerName:(NSString *)consumerName;
- (void)updateWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)getDictionary;
- (void)syncIfRequired;

@end
