/**
 * Author : hifza nazir
 * Write a program that will convert US Dollars to British Pounds (GBP) and Japanese (JPY).
 *  10% of the total amount of US Dollars will be taken as an exchange fee. For the rest 
 * of the US Dollars, half will be changed to British Pounds and the other half to JPY.
 *  Assume the exchange rate is: 1 US Dollar = 0.79 British Pound; 1 US Dollar = 127.65 JPY.
*/
#include<stdio.h>
int main()
{
    int totalAmount,yens;
    float charges, remainingAmount, pounds;
    const float YEN_PER_USD=127.65;
    const float POUND_PER_USD=0.79f;
    
//prompt the user for the amount to be calculated
 
 printf("please provide the amount to be converted");
 scanf("%i",&totalAmount);
charges = (10/100) * totalAmount;
remainingAmount = totalAmount - charges;
yens = (remainingAmount/2) * YEN_PER_USD;
pounds = (remainingAmount/2) * POUND_PER_USD;


printf("you got %f pounds, and %d yens", pounds,yens);
 return 0;
}