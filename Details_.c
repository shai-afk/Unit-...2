#include<stdio.h>
#include<stdlib.h>
//Eugene Roberts
// Reg:CT100/G/30688

int main()
{
//declare variables 
double bankbalance;
char phonenumber[13];
float height; 

    printf("Enter your height in m:\t");
    scanf("%f", &height);

    printf("Enter your bank balance in Ksh:\t");
    scanf("%lf", &bankbalance);

    printf("Enter your Phone Number :\t");
    scanf("%19s", phonenumber);

    printf("Height: %.2f m \n", height);
    printf("Bank Balance:Ksh %.2f\n", bankbalance);
    printf("Phone Number:%s\n", phonenumber);
    return 0;
}