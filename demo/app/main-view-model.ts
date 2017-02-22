import {Observable} from 'data/observable';
import {VisaCheckout} from 'nativescript-visa-checkout';

export class HelloWorldModel extends Observable {
  public message: string;
  private visaCheckout: VisaCheckout;

  constructor() {
    super();

    this.visaCheckout = new VisaCheckout();
    this.message = this.visaCheckout.message;
  }
}