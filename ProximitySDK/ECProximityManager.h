//
//  ECProximityManager.h
//  Pods
//
//  Created by encircle.io on 27/04/15.
//
//

#import <Foundation/Foundation.h>
#import "ECConsumer.h"

@interface ECProximityManager : NSObject

// Singleton
+ (instancetype)sharedInstance;

@property (nonatomic) BOOL showPopoverView;
@property (nonatomic, strong) NSString *beaconuuid;
//@property (nonatomic, strong) NSString *facebookToken;
@property (nonatomic) BOOL enableBookmark; //TODO : Implement once bookmark button is finalized.
@property (nonatomic) BOOL debugMode;

// Public methods
- (void)initWithAppId:(NSString *)clientId secret:(NSString *)secret;
- (void)registerDeviceToken:(NSString *)deviceToken;

- (ECConsumer *)sharedConsumer;
- (ECConsumer *)login:(NSString *)consumerId;
- (void)syncUser:(ECConsumer *)consumer withCallback:(void (^)(ECConsumer *consumer, NSError *error))callback;

- (void)showBookmarks;
- (void)setLogLevel;

- (void)enableConsoleLogging:(BOOL) isEnable;

- (void)disableSDK:(BOOL)isDisable;
@end
