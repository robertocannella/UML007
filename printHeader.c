#include <stdio.h>
#include "employee.h"

//**************************************************************
// Function: printHeader
// 
// Purpose: Prints the initial table header information.
// 
// Parameters: none
// 
// Returns: void
//  
//**************************************************************

void printHeader (void) 
{ 

    printf ("\n\n*** Pay Calculator ***\n");

    // print the table header
    printf("\n--------------------------------------------------------------");
    printf("-------------------");
    printf("\nName                Tax  Clock# Wage   Hours  OT   Gross ");
    printf("  State  Fed      Net");
    printf("\n                   State                           Pay   ");
    printf("  Tax    Tax      Pay");
    
    printf("\n--------------------------------------------------------------");
    printf("-------------------");

} // printHeader