//
//  VisaLibraryDelegate.h
//  VCommonLibrary
//
//  Created by Jambunathan, Ramkumar on 5/16/14.
//  Copyright (c) 2014 visa. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>
#import "VisaPaymentInfo.h"
#import "VisaPaymentSummary.h"
#import "VisaServer.h"

@protocol VisaLibraryDelegate <NSObject>

@optional
/**
 * This method will be used to supress Enrollment for the merchant if they want to.
 * By default SDK Does not supress Enrollment. 
 * If you want to supress the Enrollment, make sure you implement this method and return YES.
 */
- (BOOL)suppressEnrollment;

/**
 * This method will be used to supress dynamic card art with in checkout button.
 * By default SDK prefers to personalize user's experience with VISA Checkout, so SDK DONOT suppress Dynamic Button's Card Art.
 * If you want to suppress the Dynamic Button(Card Art in Visa Checkout button), make sure you implement this method and return YES.
 */
- (BOOL)suppressDynamicButton;

/**
 * This method is used to return the base view controller from which sdk can be launched when view controller hierarchy is complex. The sdk automatically picks up the top view controller from which sdk must be presented but in certain complex cases this may throw an 'Attempt to present <ViewController> whose view is not in the window hierarchy!' error. During this condition, the following method can be used to resolve the conflict by returning the active view controller in the hierarchy from which sdk can be presenred modally.
 */
- (UIViewController *)baseViewControllerForSDKLaunch;

/**
 * This method lets merchant prevent FB app event logging from visa checkout sdk if the merchant application is not configured to use FB sdk or if the merchant is not partnered to support app event tracking with Visa.
 */
- (BOOL)disableFBAppEvents;


@required

/**
 * This delegate is called after a successful creation of intent passing
 * along a callId for use to reference the intent on your server.
 */
- (void)checkoutSuccessWithSummary:(VisaPaymentSummary*)paymentSummary;

/**
 * This delegate is called after some sort of failure in the creation of intent
 * has occurred, check the error object for more information.
 */
- (void)checkoutFailedWithError:(NSError*)error;

/**
 * This delegate is called after the user has cancelled the creation of intent.
 */
- (void)checkoutCancelled;

/**
 * This method is invoked when the VmeCheckoutButton is clicked to initiate the checkout flow.
 */
- (VisaPaymentInfo *)paymentInfo;

/**
 * This method is invoked when the VmeCheckoutButton is clicked to set the endpoint to connect to.
 */
- (VisaServer)visaServer;



@end
