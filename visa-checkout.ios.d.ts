import { Common } from './visa-checkout.common';
import { View } from 'ui/core/view';
export declare class VisaCheckout extends Common {
    constructor(apiKey: string, useSandbox?: boolean);
}
export declare class TNSVisaButton extends View {
    private _ios;
    constructor();
    readonly ios: VisaCheckoutButton;
    readonly _nativeView: VisaCheckoutButton;
    onLoaded(): void;
}
