#include <stdio.h>

#define PA 9000000 // Ti?n nuôi b?n thân/tháng
#define PD 3600000 // Ti?n c?p du?ng/ngu?i/tháng

// Function to calculate taxable income
long long calculateTaxableIncome(long long income, int n) {
    long long tf = 12 * (PA + n * PD);
    return income - tf;
}

// Function to calculate income tax based on taxable income
long long calculateIncomeTax(long long taxableIncome) {
    long long tax = 0;

    if (taxableIncome <= 0) {
        return 0;
    } else if (taxableIncome <= 5000000) {
        tax = taxableIncome * 0.05;
    } else if (taxableIncome <= 10000000) {
        tax = 250000 + (taxableIncome - 5000000) * 0.1;
    } else if (taxableIncome <= 18000000) {
        tax = 250000 + 500000 + (taxableIncome - 10000000) * 0.15;
    } else {
        tax = 250000 + 500000 + 1200000 + (taxableIncome - 18000000) * 0.2;
    }

    return tax;
}

int main() {
    long long income, n, taxableIncome, tax;

    printf("Your income of this year:");
    scanf("%ld", &income);
    printf("Number of dependent:");
    scanf("%d", &n);

    taxableIncome = calculateTaxableIncome(income, n);
    tax = calculateIncomeTax(taxableIncome);

    printf("Yearly tax-free income: %lld\n", 12 * (PA + n * PD));
    printf("Taxable income: %lld\n", taxableIncome);
    printf("Income tax: %lld\n", tax);

    return 0;
}
