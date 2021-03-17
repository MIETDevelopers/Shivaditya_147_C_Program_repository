#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):");
    scanf("%c", &operator);
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b);
    switch(operator)
    {
        case '+':
            printf("%.lf + %.lf = %.lf",a, b, a+b);
            break;

        case '-':
            printf("%.lf - %.lf = %.lf",a, b, a-b);
            break;

        case '*':
            printf("%.lf * %.lf = %.lf",a, b, a*b);
            break;

        case '/':
            printf("%.lf / %.lf = %.lf",a, b, a/b);
            break;
    printf("Error encountered by the input values");
    }
    return 0;
}