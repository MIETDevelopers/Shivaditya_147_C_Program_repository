//Author Name: Shivaditya Sharma
//creation Date: 21st March 2021
//purpose: Fibonacci sequence using recursion
#include<stdio.h>  //Preprocessor directive to include input output function header file
//Start of main function body  
int main(){    
	int n1=0,n2=1,n3,i,number;//Declaring variable of integer datatype   
	printf("Enter the number of elements: ");//Printf function calling to print number of elements
	scanf("%d",&number);//Scanf fuction calling to read user input
	printf(" %d %d",n1,n2);//Printf function calling to print elements   
	for(i=2;i<number;++i)//Start of for loop
		{
			n3=n1+n2;//Sum of n1 and n2 assigned to n3    
  			printf(" %d",n3);//Printf function calling to print n3    
  			n1=n2;//Value of n2 assigned to n1    
  			n2=n3;//Value of n3 assigned to n2    
 		}  
	return 0;//Return statement
}//End of main function body