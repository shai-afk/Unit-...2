//Eugene Roberts
//CT100/G/30688/26
#include <stdio.h>

// Function prototype
float calculateTax(float gross_salary);

int main() {
    float  tax , amount, net_salary;
    printf("Enter the taxed amount ");
    scanf("%f", &amount);
  //function Call
    tax = calculateTax(amount);
    net_salary = amount - tax;

    
    printf("\n");
    printf("Gross Salary: KSh %.2f\n", amount);
    printf("Tax Amount:   KSh %.2f\n", tax);
    printf("Net Salary:   KSh %.2f\n", net_salary);

    return 0;
}

// 1. Function definition 
float calculateTax(float gross_salary) {
    float tax;
    if (gross_salary < 30000) {
        tax = 0.05 * gross_salary;
    } 
    else if (gross_salary >= 30000 && gross_salary <= 59999) {
        tax = 0.1 * gross_salary;
    } 
    else {
        tax = 0.15 * gross_salary;
    }

    return tax;