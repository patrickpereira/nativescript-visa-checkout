//
//  VThreeDSSetUp.h
//  VCommonLibrary
//
//  Created by Jambunathan, Ramkumar on 12/10/14.
//  Copyright (c) 2014 visa. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const VisaActivate3DS;
extern NSString *const VisaDeactivate3DS;
extern NSString *const VisaSuppress3DSChallenge;
extern NSString *const VisaAllow3DSChallenge;

@interface VisaThreeDSSetUp : NSObject

/*This flag determines whether the merchant wants to support 3DS or not.  If it is True, then the merchant supports 3DS, and he will be eligible for liability shift based on the results of the 3DS authentication.  If it is False, then none of the merchants’ transactions qualify for 3DS, and therefore, the merchant will not be eligible for any liability shift programs.
 
 Default = If merchants do not specify a value, or send some other value, then the profile level value will be used.
 */
@property (nonatomic, strong) NSString *threeDSActive;
@property (nonatomic, strong) NSString *threeDSSuppressChallenge;

@end
