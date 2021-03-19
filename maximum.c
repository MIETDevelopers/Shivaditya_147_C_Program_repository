//Author Name: Shivaditya Sharma
//Creation Date: 17th March 2021
//Purpose: To Print Maximum Number 
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of the main function body 
int main()
{
  int i,num,n,large=0;//Declaring variables of integer data type

  printf("How many numbers: ");//Printf function calling to print numbers 
  scanf("%d",&n);//Scanf calling to read user input
  
  for(i=0; i<n; i++)//Start of the for loop
  {
    printf("\nEnter number %d: ",i+1);//Printf function calling to print number
    scanf("%d",&num);//Scanf calling to read user input
    if(num>large)//If statement
    large=num;
  }//End of the for loop
  printf("\nThe Largest number is %d",large);//Printf function to print largest number
  return 0;//Return statement
}//End of the main function body