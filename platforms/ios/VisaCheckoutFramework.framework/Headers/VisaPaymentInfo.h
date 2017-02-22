//
//  VisaPaymentInfo.h
//  VCommonLibrary
//
//  Created by Jambunathan, Ramkumar on 11/26/13.
//  Copyright (c) 2013 Visa Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class VisaMerchantInfo;
@class VisaUserInfo;
@class VisaThreeDSSetUp;

@interface VisaPaymentInfo : NSObject

/**
 * Set the estimated final amount of the transaction
 */
@property (strong, nonatomic) NSDecimalNumber *amount;

/**
 * Set the currency type of the transaction (ex. 'USD')
 */
@property (strong, nonatomic) NSString *currency;

/**
 * Set whether shipping physical goods or in store pick-up
 */
@property (nonatomic, assign) BOOL isShippingAddressRequired;

/**
 * Set the merchant information for this checkout
 */
@property (nonatomic, strong) VisaMerchantInfo *merchantInfo;

/**
 * Set the user information for this checkout, used for
 * automatic form fill within Visa Checkout SDK.
 */
@property (nonatomic, strong) VisaUserInfo *userInfo;

/**
 * Set the accepted countries for shipping
 */
@property (nonatomic, strong) NSMutableArray *acceptedShippingCountries;

/**
 * Set the accepted countries for billing
 */
@property (nonatomic, strong) NSMutableArray *acceptedBillingCountries;

/**
 * Set the accepted card types and brands
 */
@property (nonatomic, strong) NSMutableArray *acceptedPaymentTypesAndBrands;

/**
 * Set the data level
 */
@property (nonatomic, strong) NSString *datalevel;

/**
 * Merchant's ID associated with the request.
 */
@property (nonatomic, strong) NSString *merchantRequestId;

/**
 * Source ID associated with the request.
 */
@property (nonatomic, strong) NSString *sourceId;

/**
 * Subtotal of the payment.
 */
@property (strong, nonatomic) NSDecimalNumber *subtotal;

/**
 * Total of shipping and handling charges in the payment.
 */
@property (nonatomic, strong) NSDecimalNumber *shippingHandlingCharges;

/**
 * Total tax-related charges in the payment.
 */
@property (nonatomic, strong) NSDecimalNumber *tax;

/**
 * Total of discounts related to the payment.
 */
@property (nonatomic, strong) NSDecimalNumber *discount;

/**
 * Total gift-wrapping charges in the payment.
 */
@property (nonatomic, strong) NSDecimalNumber *giftWrapCharges;

/**
 * Total uncategorized charges in the payment.
 */
@property (nonatomic, strong) NSDecimalNumber *miscCharges;

/**
 * payment description.
 */
@property (nonatomic, strong) NSString *paymentDescription;

/**
 * Merchant's order ID associated with the payment.
 */
@property (nonatomic, strong) NSString *orderId;

/**
 * Promotion code associated with the payment.
 */
@property (nonatomic, strong) NSString *promoCode;

/**
 * CallID that can be passed in to edit payment information for a previous transaction.
 * List of Currency-Country Supported
 */
@property (nonatomic, strong) NSString *referenceCallID;

/**
 Merchants, at the time of the checkout session, can specify these 3DS values that will override their settings as presented at the time of onboarding (in Merchant Services)
 **/
@property (nonatomic, strong) VisaThreeDSSetUp *threeDSSetUp;

/**
 * flag to enable tokenization.
 */
@property (nonatomic) NSString * enableTokenization;

@end

extern NSString *const VCurrencyCodeAE;
extern NSString *const VCurrencyCodeAR;
extern NSString *const VCurrencyCodeAU;
extern NSString *const VCurrencyCodeBR;
extern NSString *const VCurrencyCodeCA;
extern NSString *const VCurrencyCodeCL;
extern NSString *const VCurrencyCodeCN;
extern NSString *const VCurrencyCodeCO;
extern NSString *const VCurrencyCodeEU;
extern NSString *const VCurrencyCodeGB;
extern NSString *const VCurrencyCodeHK;
extern NSString *const VCurrencyCodeIN;
extern NSString *const VCurrencyCodeMX;
extern NSString *const VCurrencyCodeMY;
extern NSString *const VCurrencyCodeNZ;
extern NSString *const VCurrencyCodePE;
extern NSString *const VCurrencyCodePL;
extern NSString *const VCurrencyCodeSG;
extern NSString *const VCurrencyCodeUS;
extern NSString *const VCurrencyCodeZA;
