#include <stdio.h>

int main() {
    char name[50];
    int empID;
    float basicSalary, allowances, bonusPercentage;
    float grossMonthlySalary, annualGrossSalary, taxableIncome, tax = 0.0, netSalary;
    const float STANDARD_DEDUCTION = 50000;
    

    printf("Enter Employee Name: ");
    scanf("%s", name);
    printf("Enter Employee ID: ");
    scanf("%d", &empID);
    printf("Enter Basic Monthly Salary: ");
    scanf("%f", &basicSalary);
    printf("Enter Special Allowances (Monthly): ");
    scanf("%f", &allowances);
    printf("Enter Bonus Percentage (Annual): ");
    scanf("%f", &bonusPercentage);
    
    grossMonthlySalary = basicSalary + allowances;
    annualGrossSalary = (grossMonthlySalary * 12) + ((bonusPercentage / 100) * (grossMonthlySalary * 12));
    
    // Calculate Taxable Income after Standard Deduction
    taxableIncome = (annualGrossSalary > STANDARD_DEDUCTION) ? (annualGrossSalary - STANDARD_DEDUCTION) : 0;
    
    // Calculate Net Salary
    netSalary = annualGrossSalary - tax;
    
    // Display the Salary Report
    printf("\nSalary Report for %s (ID: %d)\n", name, empID);
    printf("--------------------------------------\n");
    printf("Gross Monthly Salary: %.2f\n", grossMonthlySalary);
    printf("Annual Gross Salary: %.2f\n", annualGrossSalary);
    printf("Taxable Income: %.2f\n", taxableIncome);
    printf("Tax Payable: %.2f\n", tax);
    printf("Net Annual Salary: %.2f\n", netSalary);
    
    return 0;
}
