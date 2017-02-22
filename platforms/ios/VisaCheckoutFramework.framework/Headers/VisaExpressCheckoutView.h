//
//  VisaExpressCheckoutView.h
//  VisaCheckoutLibrary
//
//  Created by Penchala, Sandeep Kumar on 3/2/15.
//  Copyright (c) 2015 visa. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VisaLibraryDelegate.h"

@interface VisaExpressCheckoutView : UIView
{
        
}

@property (strong,nonatomic) NSString *color;

@property (weak, nonatomic) IBOutlet id<VisaLibraryDelegate> expressCheckoutdelegate;


@end
