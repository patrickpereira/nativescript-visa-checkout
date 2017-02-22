//
//  VmeMerchantInfo.h
//  VCommonLibrary
//
//  Created by Meiyappan, Saravanarajhan on 2013-12-26.
//  Copyright (c) 2013 Visa Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum VisaUserReviewAction {
    kVisaUserReviewActionContinue = 1,
    kVisaUserReviewActionPay
} VisaUserReviewAction;

@interface VisaMerchantInfo : NSObject
/**
 Merchant name (preferably merchant application name)
 */
@property (nonatomic, strong) NSString *displayName;

/**
 Name of merchant's logo image in the bundle
 */
@property (nonatomic, strong) NSString *merchantLogoAssetName;

/**
 Merchant api key
 */
@property (nonatomic, strong) NSString *merchantAPIKey;
/**
 Custom review message
 */
@property (nonatomic, strong) NSString *customReviewActionContinueMessage;

/**
 Set the profile id if needed
 */
@property (nonatomic, strong) NSString *externalProfileId;

/**
 * Flag to indicate passed in amount is final amount that will be charged to the user
 * kVisaUserReviewActionPay - final
 * kVisaUserReviewActionContinue - subjected to change
 */
@property (nonatomic) VisaUserReviewAction userReviewAction;

/**
 * Set the canadianDebitCardSupport by Merchant if needed. Should be one of the constants defined below - VAcceptCanadianDebitCard or VDenyCanadianDebitCard
 */
@property (nonatomic, assign) NSString *canadianDebitCardSupport;

/**
 * Set the client id if needed
 */
@property (nonatomic, strong) NSString *externalClientId;

/**
 * Add any custon key value pairs if needed
 */
@property (nonatomic, strong) NSDictionary *customData;

/**
 * List of Locale Supported format is Language-CountryCode
 */

@property (nonatomic, strong) NSString *preferredLocale;

/**
 * Tag to provide information if child directed treatment should be applied for google ad tracking feature
 */
@property (nonatomic) BOOL applyChildDirectedTreatment;

/**
 * Property to disable card scan feature that will enable users to use their camera to scan card details
 */
@property (nonatomic) BOOL disableCardScanning;

/**
 * Flag to communicate to user that card data will be added to merchant's records tied with the user
 */
@property (nonatomic) BOOL communicateCardStoredOnFile;


extern NSString *const VLocale_enAE;
extern NSString *const VLocale_enAU;
extern NSString *const VLocale_enCA;
extern NSString *const VLocale_enCN;
extern NSString *const VLocale_enGB;
extern NSString *const VLocale_enHK;
//extern NSString *const VLocale_enIN;
extern NSString *const VLocale_enIE;
extern NSString *const VLocale_enMY;
extern NSString *const VLocale_enNZ;
extern NSString *const VLocale_enSG;
extern NSString *const VLocale_enUS;
extern NSString *const VLocale_enZA;

extern NSString *const VLocale_esAR;
extern NSString *const VLocale_esCL;
extern NSString *const VLocale_esCO;
extern NSString *const VLocale_esES;
extern NSString *const VLocale_esMX;
extern NSString *const VLocale_esPE;

extern NSString *const VLocale_frCA;
extern NSString *const VLocale_frFR;

extern NSString *const VLocale_plPL;

extern NSString *const VLocale_ptBR;

extern NSString *const VLocale_zhCN;
extern NSString *const VLocale_zhHK;

extern NSString *const VAcceptCanadianDebitCard;
extern NSString *const VDenyCanadianDebitCard;
extern NSString *const VEnableTokenization;
extern NSString *const VIgnoreTokenization;
extern NSString *const VDisableTokenization;

@end
