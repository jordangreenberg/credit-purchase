#include <stdio.h>
#include <math.h>

//Program computes the monthly payment and total cost of a purchase using credit

int main(int argc, char **argv)
{
	//Declare variables
    double purchasePrice = 0, interestRate = 0;
    int numberOfMonths = 0;
    
    //Prompt user to input purchase price, interest rate, and repayment period
    printf("Enter the purchase price of the item: ");
    scanf("%lf", &purchasePrice);
    printf("Enter the interest rate per year as a percentage: ");
    scanf("%lf", &interestRate);
    printf("Enter the number of months for repayment: ");
    scanf("%d", &numberOfMonths);
    
    //Convert the interest rate into decimal form
    interestRate = interestRate / 100;
    
    //Convert the yearly interest rate into a monthly interest rate
    double monthlyInterestRate = interestRate / 12;
    
    //Compute the monthly payment
    double monthlyPayment = (monthlyInterestRate) / (1 - pow(1 + monthlyInterestRate, -numberOfMonths));
    monthlyPayment = monthlyPayment * purchasePrice;
    
    //Compute the total cost
    double totalCost = monthlyPayment * numberOfMonths;
    
    //Print out the monthly payment
    printf("The monthly payment is: %.2lf\n", monthlyPayment);
    
    //Print out the total cost
    printf("The total cost of the purchase is: %.2lf\n", totalCost);
    
	return 0;
}
