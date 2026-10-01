//Eugene Roberts
//CT100/G/30688/26
#include <stdio.h>

//function prototype
float calculateDiscount(float purchase_amount);

int main() {

    float amount, result, final_amount;
    printf("Enter the amount purchased: \t");
    scanf("%f", &amount);
    //function call
    result = calculateDiscount(amount);
    final_amount = amount - result;

    printf("\n");
    printf("UCHUMI DISCOUNT PROGRAM \n");
    printf("======================== \n");
    printf("Initial Amount: Ksh. %.2f \n", amount);
    printf("Discount Offered: Ksh %.2f \n", result);
    printf("Final amount Payable: Ksh %.2f \n", final_amount);
    printf("======================== \n");

    return 0;
}

//function definition
float calculateDiscount(float purchase_amount) {
    float discount;
    if (purchase_amount < 5000) {
        discount = 0.05 * purchase_amount;
    }
    else if (purchase_amount >= 5000 && purchase_amount <= 9999) {
        discount = 0.1 * purchase_amount;
    }
    else if (purchase_amount >= 10000) {
        discount = 0.15 * purchase_amount;
    }

    return discount;