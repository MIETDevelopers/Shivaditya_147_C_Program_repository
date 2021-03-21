//Author Name: Shivaditya Sharma
//Creation Date: 21st March 2021
//Purpose: Write a C program to create Simple Calculator using switch case and function for every operation
#include<stdio.h>//Preprocessor directive to include input output function header file
//Start of the main body function 
int main(){
    char operator;//Declaring variable of char data type
    double a, b;//Declaring variable of double data type
    printf("Enter an operator (+, -, *, /):"); //Printf function calling to print an operator
    scanf("%c", &operator);//Scanf function calling to read user input
    printf("Enter two operands:");//Printf function calling to print two operators
    scanf("%lf %lf",&a, &b);//Scanf function calling to read user input
    switch(operator) //Switch case 
    {
        case '+'://Case 1
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b);//Printf function calling to print addition of two operands
            break;//Break statement

        case '-'://Case 2
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b);//Printf function calling to print subtraction of two operands
            break;//Break statement

        case '*'://Case 3
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b);//Printf function calling to print multiplication of two operands
            break;//Break statement

        case '/'://Case 4
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b);//Printf function calling to print division of two operands
            break;//Break statement
    printf("Error encountered by the input values");//Printf function calling to print an error 
    }
    return 0;//Return statement
}//End of main function body