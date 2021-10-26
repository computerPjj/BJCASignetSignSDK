//
//  BJCASignetApi.h
//  BJCASynergySignatureApi
//
//  Created by ios on 2021/1/13.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface BJCASignetApi : NSObject

+(void)signetDispatch:(UIViewController*)parentContorller AppId:(NSString *)appId ServURL:(NSString *)servURL currentMethod:(NSString *)method  Parameters:(NSString*)parameters callBack:(void(^)( NSString*result))callBack;

@end

NS_ASSUME_NONNULL_END
