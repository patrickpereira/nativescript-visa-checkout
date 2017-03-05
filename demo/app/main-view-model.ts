import { Observable } from 'data/observable';
import { VisaCheckout } from 'nativescript-visa-checkout';

export class HelloWorldModel extends Observable {
  private visaCheckout: VisaCheckout;

  constructor() {
    super();

    let visa = new VisaCheckout('B5PLIZ4O21K57Z42K4HB216zuZRVdOxN-JDOi8OdgyCcJTqgA', true);
  }
}