//
//  RCTAlipay.h
//  RCTAlipay
//

#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#import <UIKit/UIKit.h>

#if __has_include("AlipaySDK.h")
#import "AlipaySDK.h"
#else
#import <AlipaySDK/AlipaySDK.h>
#endif

@interface RCTAlipay : NSObject <RCTBridgeModule>

@end
