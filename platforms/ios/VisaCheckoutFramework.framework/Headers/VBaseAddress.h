//
//  VBaseAddress.h
//  VisaCheckoutLibrary
//
//  Created by Zhang, Miya on 3/1/15.
//  Copyright (c) 2015 visa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VBaseAddress: NSObject

@property (nonatomic, strong) NSString *addressID;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *line1;
@property (nonatomic, strong) NSString *line1Raw;
@property (nonatomic, strong) NSString *line2;
@property (nonatomic, strong) NSString *line3;
@property (nonatomic, strong) NSString *city;
@property (nonatomic, strong) NSString *stateProvinceCode;
@property (nonatomic, strong) NSString *postalCode;
@property (nonatomic, strong) NSString *countryCode;
@property (nonatomic, strong) NSString *phone;
@property (nonatomic) BOOL isPreferredAddress;
@property (nonatomic) BOOL saved;

@end
