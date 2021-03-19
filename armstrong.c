//Author Name: Shivaditya Sharma 
//Creation Date: 19th March 2021
// Purpose:Check number is armstrong or not using while loop
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of main function body
int main() {
  int num, originalNum, remainder, result = 0;//Declaring variables of integer data type
  printf("Enter a three-digit integer: \n");//Printf function calling to print a three digit integer
  scanf("%d", &num);//Scanf function calling to read user input
  originalNum = num;
//start of while loop
  while (originalNum != 0) {
     //Formula
     // remainder contains the last digit
    remainder = originalNum % 10;
        
    result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
    originalNum /= 10;
  }

  if (result == num)//If-else statement
      printf("%d is an Armstrong number.", num);//printf function calling to print an armstrong number
  else
      printf("%d is not an Armstrong number.", num);//printf function calling to print not an armstrong number

  return 0;//Return statement
}//End of main function