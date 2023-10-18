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

    double USD, JPY,Pound,excange_rate,remaning_USD ;

    printf("Please input the total amount of US Dollars: ");
    scanf("%lf",&USD);

    excange_rate = (USD/10);

    remaning_USD = USD - excange_rate;

    JPY = remaning_USD * excange_rate * YEN;





    return 0;
}