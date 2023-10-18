/**
 * Author : hifza nazir
 * This program is use to convert USD to yens and pounds
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