/*  
    Author: Yawar Hussain
    This program get USD from user and exchange in Japapnese Yen and British Pound 
    with 10 % of exchange rate 

    1 USD = 127.65 YEN
    1 USD = 0.79 GBP
*/
#include<stdio.h>

int main()
{
    const float GBP = 0.79;
    const float YEN = 127.65;

    double USD, JPY = 0,Pound = 0,exchange_rate = 0,remaning_USD =0;

    printf("Please input the total amount of US Dollars: ");
    scanf("%lf",&USD);

    exchange_rate = (USD/10);
    
    remaning_USD = USD - exchange_rate;

    JPY = remaning_USD * 0.5  * YEN;
    Pound = remaning_USD * 0.5  * GBP;

    printf("Fee (10%): %0.2f\n",exchange_rate);
    printf("You gets:\n");
    printf("%lf GBP\n",Pound);
    printf("%.0f YEN\n",JPY);




    return 0;
}