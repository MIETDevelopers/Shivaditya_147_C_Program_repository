//Author Name: Shivaditya sharma
//Creation Date: 21-03-2021
//Purpose:To demonstrate the use of various string operations  
#include <stdio.h>//Preprocessive directive to include input output functions header file
void displayString(char str[]);//String declaration

int main()//Start of main function body
{
    char str[50];//Declare string of char datatype
    printf("Enter String: \n");//Print the string
    fgets(str, sizeof(str), stdin);  //This will read the user input.           
    displayString(str);     // Passing string to a function.    
    return 0;//Return statment
}
void displayString(char str[])//String defination
{
	//This will give output.
    printf("String Output: ");//Print the string output
    puts(str);
    }//Print string