# Visa Checkout Mobile SDK for NativeScript

The Visa Checkout Mobile SDKs allow merchants to quickly build and implement a native checkout application for iOS or Android-enabled devices. Visa Checkout enabled within a mobile application allows consumers to seamlessly and securely complete purchases on the go when using their iPhones or Android devices.

[Learn more here](https://developer.visa.com/products/visa_checkout/guides#adding_visa_checkout_to_a_mobile_application).

## Prerequisites

You will need a Visa Developer Account as well as create an app in their portal to work with. [You can do that here](https://developer.visa.com/portal/#users/new).

## Usage

```
import { VisaCheckout } from 'nativescript-visa-checkout';

let visa = new VisaCheckout('your api key', true); // for sandbox
```

Then in your view, you can use the button:

```
<Page xmlns="http://schemas.nativescript.org/tns.xsd"
  loaded="pageLoaded" class="page"
  xmlns:Visa="nativescript-visa-checkout">
  <StackLayout class="p-20">
    <Visa:TNSVisaButton />
  </StackLayout>
</Page>
```

## Demo

You can checkout the demo in this repo with the following:

```
git clone 



