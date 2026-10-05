#include<stdio.h>
#include<math.h>

float principal_interest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

float compound_interest(float principal, float rate, float time) {
    return principal * (pow((1 + rate / 100), time)) - principal;
}

void main() {
    float principal, rate, time;
    
    // Input for principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter time (in years): ");
    scanf("%f", &time);
    
    // Calculate simple interest
    float simpleInterest = principal_interest(principal, rate, time);
    
    // Calculate compound interest
    float compInterest = compound_interest(principal, rate, time);
    
    // Display results
    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compInterest);

}