
declare const enum VisaCardBrand {

	Visa = 0,

	Mastercard = 1,

	Amex = 2,

	Discover = 3,

	Electron = 4,

	Elo = 5
}

declare class VisaCheckoutButton extends UIControl {

	static alloc(): VisaCheckoutButton; // inherited from NSObject

	static appearance(): VisaCheckoutButton; // inherited from UIAppearance

	static appearanceForTraitCollection(trait: UITraitCollection): VisaCheckoutButton; // inherited from UIAppearance

	static appearanceForTraitCollectionWhenContainedIn(trait: UITraitCollection, ContainerClass: typeof NSObject): VisaCheckoutButton; // inherited from UIAppearance

	static appearanceForTraitCollectionWhenContainedInInstancesOfClasses(trait: UITraitCollection, containerTypes: NSArray<typeof NSObject>): VisaCheckoutButton; // inherited from UIAppearance

	static appearanceWhenContainedIn(ContainerClass: typeof NSObject): VisaCheckoutButton; // inherited from UIAppearance

	static appearanceWhenContainedInInstancesOfClasses(containerTypes: NSArray<typeof NSObject>): VisaCheckoutButton; // inherited from UIAppearance

	static new(): VisaCheckoutButton; // inherited from NSObject

	isEnabled: boolean;

	standardStyle: boolean;

	style: VisaCheckoutButtonStyle;

	static readonly miniButtonImage: UIImage;

	onCheckoutWithPurchaseInfoCompletion(purchaseInfo: VisaPurchaseInfo, completion: (p1: VisaCheckoutResult) => void): void;

	onCheckoutWithTotalCurrencyCompletion(total: VisaCurrencyAmount, currency: VisaCurrency, completion: (p1: VisaCheckoutResult) => void): void;
}

declare const enum VisaCheckoutButtonStyle {

	Standard = 0,

	Neutral = 1
}

declare const enum VisaCheckoutConfigStatus {

	SdkVersionDeprecation = 0,

	DebugModeNotSupported = 1,

	InvalidProfileName = 2,

	NetworkFailure = 3,

	InvalidAPIKey = 4,

	InternalError = 5
}

declare class VisaCheckoutResult extends NSObject {

	static alloc(): VisaCheckoutResult; // inherited from NSObject

	static new(): VisaCheckoutResult; // inherited from NSObject

	readonly callId: string;

	readonly encryptedKey: string;

	readonly encryptedPaymentData: string;

	readonly lastFourDigits: string;

	readonly postalCode: string;

	readonly statusCode: VisaCheckoutResultStatus;
}

declare const enum VisaCheckoutResultStatus {

	Success = 0,

	UserCancelled = 1,

	DuplicateCheckoutAttempt = 2,

	NotConfigured = 3,

	InternalError = 4
}

declare class VisaCheckoutSDK extends NSObject {

	static alloc(): VisaCheckoutSDK; // inherited from NSObject

	static checkoutWithPurchaseInfoCompletion(purchaseInfo: VisaPurchaseInfo, completion: (p1: VisaCheckoutResult) => void): void;

	static checkoutWithTotalCurrencyCompletion(total: VisaCurrencyAmount, currency: VisaCurrency, completion: (p1: VisaCheckoutResult) => void): void;

	static configureWithEnvironmentApiKeyProfileNameResult(environment: VisaEnvironment, apiKey: string, profileName: string, result: (p1: VisaCheckoutConfigStatus) => void): void;

	static configureWithProfileResult(profile: VisaProfile, result: (p1: VisaCheckoutConfigStatus) => void): void;

	static new(): VisaCheckoutSDK; // inherited from NSObject

	static readonly isReady: boolean;
}

declare const enum VisaCountry {

	Argentina = 0,

	Australia = 1,

	Brazil = 2,

	Canada = 3,

	Chile = 4,

	China = 5,

	Colombia = 6,

	France = 7,

	HongKong = 8,

	India = 9,

	Ireland = 10,

	Malaysia = 11,

	Mexico = 12,

	NewZealand = 13,

	Peru = 14,

	Poland = 15,

	Singapore = 16,

	SouthAfrica = 17,

	Spain = 18,

	UnitedArabEmirates = 19,

	UnitedKingdom = 20,

	UnitedStates = 21
}

declare const enum VisaCurrency {

	Aed = 0,

	Ars = 1,

	Aud = 2,

	Brl = 3,

	Cad = 4,

	Clp = 5,

	Cny = 6,

	Cop = 7,

	Eur = 8,

	Gbp = 9,

	Hkd = 10,

	Inr = 11,

	Mxn = 12,

	Myr = 13,

	Nzd = 14,

	Pen = 15,

	Pln = 16,

	Sgd = 17,

	Usd = 18,

	Zar = 19
}

declare class VisaCurrencyAmount extends NSObject {

	static alloc(): VisaCurrencyAmount; // inherited from NSObject

	static new(): VisaCurrencyAmount; // inherited from NSObject

	constructor(o: { decimalNumber: NSDecimalNumber; });

	constructor(o: { double: number; });

	constructor(o: { extendedGraphemeClusterLiteral: string; });

	constructor(o: { floatLiteral: number; });

	constructor(o: { int: number; });

	constructor(o: { integerLiteral: number; });

	constructor(o: { string: string; });

	constructor(o: { stringLiteral: string; });

	constructor(o: { unicodeScalarLiteral: string; });

	initWithDecimalNumber(decimalNumber: NSDecimalNumber): this;

	initWithDouble(double_: number): this;

	initWithExtendedGraphemeClusterLiteral(value: string): this;

	initWithFloatLiteral(value: number): this;

	initWithInt(int_: number): this;

	initWithIntegerLiteral(value: number): this;

	initWithString(string: string): this;

	initWithStringLiteral(value: string): this;

	initWithUnicodeScalarLiteral(value: string): this;
}

declare const enum VisaDataLevel {

	None = 0,

	Summary = 1,

	Full = 2
}

declare const enum VisaEnvironment {

	Sandbox = 0,

	Production = 1
}

declare class VisaProfile extends NSObject {

	static alloc(): VisaProfile; // inherited from NSObject

	static new(): VisaProfile; // inherited from NSObject

	acceptCanadianDebitCards: boolean;

	apiKey: string;

	clientId: string;

	datalevel: VisaDataLevel;

	displayName: string;

	enableTokenization: boolean;

	environment: VisaEnvironment;

	logo: string;

	profileName: string;

	constructor(o: { environment: VisaEnvironment; apiKey: string; profileName: string; });

	acceptedBillingCountries(countries: NSArray<number>): void;

	acceptedCardBrands(brands: NSArray<number>): void;

	acceptedShippingCountries(countries: NSArray<number>): void;

	initWithEnvironmentApiKeyProfileName(environment: VisaEnvironment, apiKey: string, profileName: string): this;
}

declare class VisaPurchaseInfo extends NSObject {

	static alloc(): VisaPurchaseInfo; // inherited from NSObject

	static new(): VisaPurchaseInfo; // inherited from NSObject

	customData: NSDictionary<string, string>;

	customDescription: string;

	discount: VisaCurrencyAmount;

	giftWrapCharges: VisaCurrencyAmount;

	miscellaneousCharges: VisaCurrencyAmount;

	orderId: string;

	promoCode: string;

	referenceCallId: string;

	requestId: string;

	reviewAction: VisaReviewAction;

	reviewMessage: string;

	shippingAndHandlingCharges: VisaCurrencyAmount;

	shippingRequired: boolean;

	sourceId: string;

	subtotal: VisaCurrencyAmount;

	tax: VisaCurrencyAmount;

	threeDSActive: boolean;

	threeDSSuppressChallenge: boolean;

	constructor(o: { total: VisaCurrencyAmount; currency: VisaCurrency; });

	initWithTotalCurrency(total: VisaCurrencyAmount, currency: VisaCurrency): this;
}

declare const enum VisaReviewAction {

	Pay = 0,

	Continue = 1,

	CardOnFile = 2
}
