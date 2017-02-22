import {Observable} from 'data/observable';
import {VisaCheckout} from 'nativescript-visa-checkout';

declare var VisaCheckoutFramework: any;

export class HelloWorldModel extends Observable {
  public message: string;
  private visaCheckout: VisaCheckout;

  constructor() {
    super();

    console.dump(VisaCheckoutFramework);

    this.visaCheckout = new VisaCheckout();
    this.message = this.visaCheckout.message;
  }
}