var VisaCheckout = require("nativescript-visa-checkout").VisaCheckout;
var visaCheckout = new VisaCheckout();

// TODO replace 'functionname' with an acual function name of your plugin class and run with 'npm test <platform>'
describe("functionname", function() {
  it("exists", function() {
    expect(visaCheckout.functionname).toBeDefined();
  });

  it("returns a promise", function() {
    expect(visaCheckout.functionname()).toEqual(jasmine.any(Promise));
  });
});