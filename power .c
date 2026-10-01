//Eugene Roberts
//CT100/G/30688/26
#include <stdio.h>

// Function prototype
float calculateBill(float numberofunits);

int main() {
    float units, total_bill;
    printf("Enter the units consumed: ");
    scanf("%f", &units);
//function call
    total_bill = calculateBill(units);

    printf("\n");
    printf("KENGEN POWER\n")
    printf("Units Consumed: %.2f\n", units);
    printf("Total Bill: KSh %.2f\n", total_bill);

    return 0;
}

// Function definition 
float calculateBill(float amount) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}