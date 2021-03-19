//Author Name: Shivaditya Sharma
//Creation Date: 19th March 2021
//Purpose: Check if a number is prime or not using while loop
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of the main body function
int main()
{
   int n, count = 0;//Declaring variables of integer data type
 
    printf("Enter the Number.\n");//printf function calling to print numbers
    scanf("%d",&n);//Scanf function to read user input
    
    int i=2; 
    while(i<=n/2)//Start of while loop
    {
        ++i; //Increment
        //Check for non prime number
        if(n%i==0)//If statement
        {
            count=1;
            break;//Break statement
        }
    }
    //This will give the output.
    if (count==0)//If statement
        printf("%d is a Prime number.",n);//Printf function calling to print a prime number
    else
        printf("%d is not a Prime number.",n);//Printf function calling to print not a prime number
 
    getchar();//Read character
    return 0; //Return statement
}