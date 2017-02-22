//
//  VisaPaymentSummary.h
//  VCommonLibrary
//
//  Created by Kumar, Ashwani on 5/21/14.
//  Copyright (c) 2014 visa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VisaPaymentSummary : NSObject

@property (nonatomic, strong) NSString *callId;

@property (nonatomic, strong) NSString *encPaymentData;
@property (nonatomic, strong) NSString *encKey;

@property (nonatomic, strong) NSString *lastFourDigits;
@property (nonatomic, strong) NSString *cardBrand;
@property (nonatomic, strong) NSString *cardType;
@property (nonatomic, strong) NSString *countryCode;
@property (nonatomic, strong) NSString *postalCode;

@end
