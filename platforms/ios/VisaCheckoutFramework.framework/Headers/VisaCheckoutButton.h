//
//  VmeCheckoutButton.h
//  VCommonLibrary
//
//  Created by Jambunathan, Ramkumar on 11/29/13.
//  Copyright (c) 2013 Visa Inc. All rights reserved.
//

#import "VisaLibraryDelegate.h"
#import <UIKit/UIKit.h>

// Width and height of this button is hardcoded to 213 and 47 respectively in the code.
// UI in Merchant should be set accordingly.

extern NSString *const VisaCheckoutButtonColorStandard;
extern NSString *const VisaCheckoutButtonColorNeutral;

@interface VisaCheckoutButton : UIButton

@property (weak, nonatomic) IBOutlet id<VisaLibraryDelegate> delegate;

//Dynamic Neutal color Attribute
@property (strong,nonatomic) NSString *color;
- (void)adjustButtonImage:(UIImage *)img;

@end


@interface VisaCheckout : NSObject

@property (weak, nonatomic) id<VisaLibraryDelegate> delegate;

+ (VisaCheckout *)sharedInstance;
- (void)invokeVisaCheckout:(void (^) (NSError *error))completionHandler withOptions:(id)options withDelegate:(id)delegate;

- (UIImage *) fetchCardArtImage;
- (BOOL) isCustomCardArt;

- (void) setCustomizationURL:(NSString *) urlString;
-(void) changeEnvironment;


@end
