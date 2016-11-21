#import "AppDelegate.h"

@interface AppDelegate (FirebasePlugin)
@property (nonatomic, strong) NSNumber *applicationInBackground;
+ (NSData*)getLastPush;
@end
