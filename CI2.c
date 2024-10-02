#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principal, float rate, float time) {
    // Calculate compound interest
    float amount = principal * pow((1 + rate / 100), time);
    return amount - principal; // Return only the compound interest
}

int main() {// Calculate compound interest
    compoundInterest = calculateCompoundInterest(principal, rate, time);
    totalAmount = principal + compoundInterest
    
    
    
    
    
    
    
    
    
    
    
    float principal, rate, time, compoundInterest, totalAmount;

    printf("Compound Interest Calculator\n");
    
    // Input principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    // Input annual interest rate
    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);
    
    // Input time in years
    printf("Enter the time (in years): ");
    scanf("%f", &time);


    // Calculate compound interest
    compoundInterest = calculateCompoundInterest(principal, rate, time);
    totalAmount = principal + compoundInterest;

    // Output results
    printf("\nCompound Interest: $%.2f\n", compoundInterest);
    printf("Total Amount after %.2f years: $%.2f\n", time, totalAmount);

    return 0; // Successful completion
}
