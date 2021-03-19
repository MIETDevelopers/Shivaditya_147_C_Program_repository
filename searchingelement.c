//Author Name :Shivaditya Sharma
//Creation Date: 19th March 2021
//Purpose: Program to search an element in the array based on user choice.        
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of main function body
void main(){  //In this program we are not using 'return 0', So 'int main() -> void main()'.
    int num;//Declaring variable of integer data type
    int i,  keynum, found = 0;//Declaring variable of integer data type
 
    printf("Enter the number of elements: \n");//Printf function calling to print numbers of elements
    scanf("%d", &num);//Scanf function calling to read the user input
    int array[num];//Declaring an array of integer data type
    printf("Enter the elements one by one: \n");//Printf function calling to print the elements one by one
    for (i = 0; i < num; i++)//Start of for loop
    {
        scanf("%d", &array[i]); //Scanf function calling to read the user input.
    }
 
    printf("Enter the element to be searched: ");//Printf function calling to print the element to be searched
    scanf("%d", &keynum);//Scanf function calling to read the user input
    // This step will determine Linear search.
    for (i = 0; i < num ; i++)//Using for loop
    {
        if (keynum == array[i] )//If statement
        {
            found = 1;
            break;//Break statement
        }
    }
    //This will give the output based on user input.
    if (found == 1) //If-else statement
        printf("Element is present in the array at position %d .",i+1);//Printf function calling to print the element is present the in array
    else
        printf("Element is not present in the array.\n");//Printf function calling  to print the element is not the in the array
}//End of main function body