#include<stdio.h>

double m_tax(double salary,int month);

int main()
{
    double money,tax;
    int i;
    for(i=1;i<=12;i++)
    {
        scanf("%lf",&money);
        tax=m_tax(money,i);
        printf("the sum of %d months tax is %.2f\n",i,tax);
    }
    return 0;
}
double m_tax(double salary,int month) {
    double taxableIncome = salary - 5000 * month;
    double tax = 0;

    if (taxableIncome <= 36000) {
        tax = taxableIncome * 0.03;
    } else if (taxableIncome <= 144000) {
        tax = 36000 * 0.03 + (taxableIncome - 36000) * 0.1;
    } else if (taxableIncome <= 300000) {
        tax = 36000 * 0.03 + 108000 * 0.1 + (taxableIncome - 144000) * 0.2;
    } else if (taxableIncome <= 420000) {
        tax = 36000 * 0.03 + 108000 * 0.1 + 156000 * 0.2 + (taxableIncome - 300000) * 0.25;
    } else if (taxableIncome <= 660000) {
        tax = 36000 * 0.03 + 108000 * 0.1 + 156000 * 0.2 + 120000 * 0.25 + (taxableIncome - 420000) * 0.3;
    } else if (taxableIncome <= 960000) {
        tax = 36000 * 0.03 + 108000 * 0.1 + 156000 * 0.2 + 120000 * 0.25 + 240000 * 0.3 + (taxableIncome - 660000) * 0.35;
    } else {
        tax = 36000 * 0.03 + 108000 * 0.1 + 156000 * 0.2 + 120000 * 0.25 + 240000 * 0.3 + 300000 * 0.35 + (taxableIncome - 960000) * 0.45;
    }
    return tax;
}
