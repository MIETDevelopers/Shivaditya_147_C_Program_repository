//Author Name: Shivaditya Sharma 
//Creation Date: 19-03-2021
//Purpose: Sorting an array using insertion sort
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of the main body function 
int main()
{
    int n, i, j, temp;//Declaring variables of integer data type
    int arr[64];//Declaring an array of interger data type 
    printf("Enter number of elements\n");//Printf function calling to print the elements
    scanf("%d", &n);//Scanf function calling to read the user input

    printf("Enter %d integers\n", n);//Printf function calling to print the integers
    for (i = 0; i < n; i++)//Start of the for loop
    {
        scanf("%d", &arr[i]);//Scanf function calling to read the user input
    }
    for (i = 1 ; i <= n - 1; i++) //Using for loop.
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])//Using while loop
            {
            //Swap function will help for the purpose.       
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    //This will give the output.
    printf("Sorted list in ascending order:\n");//Printf function calling to print Sorted list in ascending order
    for (i = 0; i <= n - 1; i++)//Using for loop
    {
        printf("%d\n", arr[i]);//printf function calling to print array 
    }
    return 0;//Return Statement
}//End of the main function body