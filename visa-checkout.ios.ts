import { Common } from './visa-checkout.common';
import { View } from 'ui/core/view';

export class VisaCheckout extends Common {

  constructor(apiKey: string, useSandbox?: boolean) {
    super();
    console.log('VisaCheckout apiKey:', apiKey);
    try {

      VisaCheckoutSDK.configureWithEnvironmentApiKeyProfileNameResult(
        useSandbox ? VisaEnvironment.Sandbox : VisaEnvironment.Production,
        apiKey,
        'Nathan',
        (status: VisaCheckoutConfigStatus) => {
          console.log(`VisaCheckoutSDK.configure status`, status);
        }
      )

    } catch (err) {
      console.log(err);
    }
    
  }  
}

export class TNSVisaButton extends View {
  private _ios: VisaCheckoutButton;

  constructor() {
    super();
    this._ios = VisaCheckoutButton.alloc().initWithFrame(CGRectMake(0, 0, 0, 0));
  }  

  public get ios() {
    return this._ios;
  }

  public get _nativeView() {
    return this._ios;
  }

  onLoaded() {
    super.onLoaded();

    setTimeout(() => {
      let amount = VisaCurrencyAmount.alloc().initWithDouble(22.10);
      this._ios.onCheckoutWithTotalCurrencyCompletion(amount, VisaCurrency.Usd, (p1: VisaCheckoutResult) => {
        console.log(p1);
      });
    }, 4000);
  }
}