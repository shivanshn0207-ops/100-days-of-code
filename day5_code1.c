#include <stdio.h>
#include <math.h> // required for pow()
int main()
{
    float principal; // initial principal amount
    float rate;      // annual rate of interest (in percentage)
    float simple_interest;
    float compound_interest;
    int time; // time period in years
    int n;    // number of times interest compounds per year
    printf("Enter Principal, Rate of Interest and Time:");
    scanf("%f, %f, %d", &principal, &rate, &time);
    simple_interest = principal * rate * time / 100;
    printf("Simple Interest = %.2f\n", simple_interest);

    printf("Enter number of times interest compounds per year:");
    scanf("%d", &n);

    // convert interest rate to decimal format
    float r_decimal = rate / 100.0;

    //  calculate amount using pow(base, exponent)
    float amount = principal * pow((1 + r_decimal / n), (n * time));

    // calculate total interest earned
    compound_interest = amount - principal;

    // display the results
    printf("Total Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", compound_interest);
    return 0;
}