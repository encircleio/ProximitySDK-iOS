//
//  Created by encircle.io on 27/04/15.
//  Copyright (c) 2015 encircle.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ECConsumer.h"

@interface ECProximityManager : NSObject

// Singleton
+ (instancetype)sharedInstance;

//Properties
@property (nonatomic) BOOL showPopoverView;
@property (nonatomic, strong) NSString *beaconuuid;
@property (nonatomic) BOOL debugMode;

// Public methods
- (void)initWithAppId:(NSString *)clientId secret:(NSString *)secret;
- (void)registerDeviceToken:(NSString *)deviceToken;
- (ECConsumer *)sharedConsumer;
- (ECConsumer *)login:(NSString *)consumerId;
- (void)syncUser:(ECConsumer *)consumer withCallback:(void (^)(ECConsumer *consumer, NSError *error))callback;
- (void)showBookmarks;
- (void)enableConsoleLogging:(BOOL) isEnable;
- (void)setLogLevel;
- (void)disableSDK:(BOOL)isDisable;

@end
